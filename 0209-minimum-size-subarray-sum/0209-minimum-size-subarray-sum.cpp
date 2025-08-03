class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int l=0,currSum=0,mn=1e9;
        for(int r=0;r<n;r++)
        {
            currSum+=nums[r];
            while(currSum>=target){
                mn=min(mn,r-l+1);
                currSum-=nums[l];
                l++;
            }
        } 

        if (mn==1e9)
        return 0;
        else return mn;

    }
};