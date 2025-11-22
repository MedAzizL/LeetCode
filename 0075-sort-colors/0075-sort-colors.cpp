class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n =nums.size();
        int ind=0;
        for(int i=0 ;i<n-1 ;i++){
            int mn=nums[i];
            
            for(int j=i ; j<n;j++)
              
                if( nums[j]<=mn)
                  { 
                    mn=min(nums[j],mn);
                    ind=j;
                  }
            
            swap (nums[ind],nums[i]);

        }

    }
};