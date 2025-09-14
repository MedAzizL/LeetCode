class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        pair<int,int> l = {0, 0}, r = {n-1, m-1};

        while (true) {
            int steps = (r.first - l.first - 1) * m + (m - l.second) + r.second + 1;
            steps /= 2;

            pair<int,int> mid = { l.first + steps/m + ((l.second + steps % m)/m), (l.second + steps % m) % m };

            if(matrix[mid.first][mid.second] == target)
                return true;
            else if(matrix[mid.first][mid.second] > target) {
                if(mid.second > 0)
                    r = {mid.first, mid.second-1};
                else if(mid.first > 0)
                    r = {mid.first-1, m-1};
                else
                    break;
            } else {
                if(mid.second < m-1)
                    l = {mid.first, mid.second+1};
                else if(mid.first < n-1)
                    l = {mid.first+1, 0};
                else
                    break;
            }

            if(l.first > r.first || (l.first == r.first && l.second > r.second))
                break;
        }

        return false;
    }
};
