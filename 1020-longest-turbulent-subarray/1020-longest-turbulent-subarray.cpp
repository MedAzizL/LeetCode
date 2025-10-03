class Solution {
public:
    int maxTurbulenceSize(vector<int>& nums) {
        int n = nums.size();
        

        int res = 0, l = 0;

        for (int r = 1; r < n-1; r++) {
            if (!((nums[r-1] < nums[r] && r+1 < n && nums[r] > nums[r+1]) || (nums[r-1] > nums[r] && r+1 < n && nums[r] < nums[r+1])))
            {
              if(nums[r-1]==nums[r])
              l=r;

              res=max(res,r-l+1);

              l=r;
          
            }
        }
        
        if(n>1 && nums[n-1]==nums[n-2])
            l=n-1;

        res=max(res,n-l);

        return res;
    }
};
