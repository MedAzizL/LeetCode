class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        
        int n=nums.size();
        int mx=0;

        for(int i=0;i<n;i++){
            if ( i==0)
            mx=max(mx,abs(nums[0]-nums[n-1]));
            else
            mx=max(mx, abs(nums[i]-nums[i-1]));

        }

    return mx;
    }
};