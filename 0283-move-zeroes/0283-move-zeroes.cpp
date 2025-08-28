class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        int pt=0;

        for(int i=0;i<n;i++){
            if (nums[i]){
                nums[pt++]=nums[i];
            }
        }
        for(int i=pt ;i<n;i++){
            nums[i]=0;
        }

    }
};