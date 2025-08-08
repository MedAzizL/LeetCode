class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> occ;
        int n= nums.size();
        int res=0;

        for( int num :nums)
        occ[num]++;

        for(int i=0;i<n;i++){

            if( k-nums[i] != nums[i])
            {
            if( occ[k-nums[i]] >=1 && occ[nums[i]]>0  )
              {  res++;
                occ[k-nums[i]]--;
                occ[nums[i]]--;
              }
            }
            else {
                if( occ[k-nums[i]] >=2   )
               { res++;
                occ[k-nums[i]]--;
                occ[nums[i]]--;
               }
            }

        }
        return res;
        
        }


};