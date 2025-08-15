class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int n=nums.size();
        int l=0, mx=0,sum=0,currSum=0;
        
        for(int r=0;r<n;r++){
            sum+=nums[r];
        }

        if( x > sum)
        return -1;
        else if( sum==x)
        return n;

          for(int r=0;r<n;r++){

            currSum+=nums[r];

            while( currSum > sum-x )
           {
             currSum-=nums[l];
            l++;}

            if(currSum==sum-x)
            mx=max(mx,r-l+1);
         
        }

    return ( mx>0 ? n-mx : -1 );
    
         
    }
};