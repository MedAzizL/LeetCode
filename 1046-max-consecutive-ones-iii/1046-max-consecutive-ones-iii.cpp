class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int n = nums.size() ;
        int l=0 , mx = 0,z=0;
        
        for(int r=0;r<n;r++){

            if( nums[r]==0)
            z++;

            if( z<=k )
            mx=max(mx,r-l+1) ;
            
            while(z > k){

                if( nums[l] == 0)
                z--;

                l++;

            }

        }

        return   mx; 
        
    }
};