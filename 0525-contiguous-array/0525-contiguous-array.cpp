class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n + 1, 0); 
        unordered_map<int, int> mp;
        int mx = 0;

        mp[0] = 0; 

        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + (nums[i - 1] == 1 ? 1 : -1);

            if (mp.find(pref[i]) == mp.end()) {
                mp[pref[i]] = i; 
            } else {
                mx = max(mx, i - mp[pref[i]]);
            }
        }

        return mx;
    }
};
