class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        auto  pos =upper_bound(nums.begin(),nums.end(),target);
        auto pos2=lower_bound(nums.begin(),nums.end(),target);

        return  pos-nums.begin()!=pos2-nums.begin() ? pos2-nums.begin() :  pos-nums.begin();
    }
};