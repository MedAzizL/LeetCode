class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1)
        return 1;
    
        int pt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1] )
            nums[pt++]=nums[i-1];
            if (i==nums.size()-1)
            nums[pt++]=nums[i];


        }
        return pt;
    }
};