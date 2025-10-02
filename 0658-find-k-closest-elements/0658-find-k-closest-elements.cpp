class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;

        int pt1 = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        int pt2 = pt1 - 1;

        while (res.size() < k && pt1 < arr.size() && pt2 >= 0) {
            if (abs(arr[pt2] - x) <= abs(arr[pt1] - x)) {
                res.push_back(arr[pt2]);
                pt2--;
            } else {
                res.push_back(arr[pt1]);
                pt1++;
            }
        }

        while (res.size() < k) {
            if (pt1 < arr.size()) {
                res.push_back(arr[pt1]);
                pt1++;
            } else if (pt2 >= 0) {
                res.push_back(arr[pt2]);
                pt2--;
            }
        }

        sort(res.begin(), res.end());
        return res;
    }
};
