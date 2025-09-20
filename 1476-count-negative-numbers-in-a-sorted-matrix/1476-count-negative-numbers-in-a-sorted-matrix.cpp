#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for (auto row : grid) {

            auto it = lower_bound(row.begin(), row.end(), -1, greater<int>());

            while (it != row.end() && *it >= 0) ++it;
            
            ans += row.end() - it;
        }
        return ans;
    }
};
