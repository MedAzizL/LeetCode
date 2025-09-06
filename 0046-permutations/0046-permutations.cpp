class Solution {

private:
void backtrack(map<int,bool>& used, vector<int> nums,vector<int> ds,vector<vector<int>>& res ){
    
    if(ds.size()==nums.size()){
        res.push_back(ds);
    }

    for(int i=0;i<nums.size();i++){
        if(!used[nums[i]]){
            ds.push_back(nums[i]);
            used[nums[i]]=true;

            backtrack(used,nums,ds,res);
            
            used[nums[i]]=false;
            ds.pop_back();

        }
    }


}

public:
    vector<vector<int>> permute(vector<int>& nums) {
        
       map<int,bool> used;
       vector<int> ds; 
       vector<vector<int>> res;

       backtrack(used,nums,ds,res);

       return res;


    }
};