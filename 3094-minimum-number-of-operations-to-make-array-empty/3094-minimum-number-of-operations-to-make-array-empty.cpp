class Solution {
public:
    int minOperations(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int,int> occ;
        int res = 0;

        for(int num : nums)
        {
            occ[num]++;
        }

        for(auto p : occ)
        {   
            int currOcc= p.second;

            if( currOcc == 1)
            return -1;

            if( currOcc % 3)
            res += currOcc / 3 + 1 ;
            else
            res += currOcc / 3 ;

        }

        return res;
    }
};