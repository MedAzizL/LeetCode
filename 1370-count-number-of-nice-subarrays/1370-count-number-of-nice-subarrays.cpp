class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
     
         int n = nums.size() , res = 0;
         vector<int> pref(n);
         unordered_map<int,int> mp;
         mp[0]=1;

         for(int i=0;i<n;i++)
         {
            if( i )
                pref[i]=pref[i-1]+(nums[i]%2) ;
            else
                pref[i]=nums[i]%2;

            if( mp[ pref[i] - k] > 0 )

                 res+= mp[ pref[i] - k ];

            mp[pref[i]]++;

         }

         return res;

        
    }
};