class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int n=nums.size();  

      auto it1=upper_bound(nums.begin(),nums.end(),target);
      auto it2=lower_bound(nums.begin(),nums.end(),target);

      if(n==0 || it1==it2){
        return {-1,-1};
      }
      it1--;
      return { static_cast<int>(it2 - nums.begin()), static_cast<int>(it1 - nums.begin()) };
      
      



    }
};