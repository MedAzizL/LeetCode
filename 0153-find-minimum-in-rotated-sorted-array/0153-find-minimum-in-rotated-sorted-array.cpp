class Solution {
public:
    int findMin(vector<int>& a) {
        int l = 0, r = a.size()-1, ans =a[0];
        while (l<=r) {
            if (a[l] <= a[r])
             { ans=min(ans, a[l]); break; }
            int m = (l + r) / 2;
            ans = min(ans, a[m]);
            if (a[m] >= a[l])
             l = m + 1;
            else r = m - 1;
        }
        return ans;
    }
};
