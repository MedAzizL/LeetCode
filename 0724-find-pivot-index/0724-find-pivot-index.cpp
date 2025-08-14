class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        vector<int> pref(n);
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
        }
        for(int i=0;i<n;i++){
            if(pref[n-1]-pref[i]== pref[i]-nums[i])
            return i;
        }
        return -1;

    }
};