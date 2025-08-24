class Solution {
private:
void backtrack(vector<vector<int>>& res,int i,int n,vector<int> nums,vector<int>& ds) {
        if( i==n)
        {res.push_back(ds);
        return;
        }

        ds.push_back(nums[i]);
        backtrack(res,i+1,n,nums,ds);
        ds.pop_back();
        backtrack(res,i+1,n,nums,ds);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
         vector<vector<int>>  res;
         vector<int> ds;
         backtrack(res,0,nums.size(),nums,ds);
         return res;

    }
};
