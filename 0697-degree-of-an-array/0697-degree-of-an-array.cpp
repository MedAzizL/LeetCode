class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> first , last , occ;
        int mx=0;
        for(int x: nums)
            {       
                first[x]=-1;
                last[x]=-1;
            }

        for(int x: nums)
            { 
                occ[x]++;
                mx=max(mx,occ[x]);
            }
        
        for(int i=0 ; i<nums.size() ;i++){
            if( first[nums[i]] == -1)
                first[ nums[i] ] = i;

            last[nums[i]]=i;
        }

        vector<int> maxs;

        for(int x: nums)
            if(occ[x]==mx)
                maxs.push_back(x);
        
        int res= nums.size();
        for(int x: maxs)
            res=min(res , last[x] - first[x] + 1);

        return res;
    }
};