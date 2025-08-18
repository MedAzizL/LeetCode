class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> index;
        for(int i=0;i<n;i++){
            if( index[target-nums[i] ] ){
                return {i,index[target-nums[i]] -1 };
            }
            
            index[nums[i]]=i+1;
       }
    return {};
    }
};