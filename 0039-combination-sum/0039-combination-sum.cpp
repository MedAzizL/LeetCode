class Solution {

private:
        void backtrack(vector<vector<int>>& res, vector<int>& ds , vector<int> candid  ,int i,int targ,set<vector<int>>& s){
            
            if( i==candid.size() || targ <0)
            return ;

            if(targ==0 && s.find(ds) ==s.end())
            {res.push_back(ds);   
            s.insert(ds); }        

            ds.push_back(candid[i]);
            backtrack(res,ds, candid, i,targ-candid[i],s);
            ds.pop_back();
            backtrack(res,ds,candid,i+1,targ,s);
        }
 


public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> s;
        vector<vector<int>> res;
        vector<int> ds;
        backtrack(res,ds,candidates,0,target,s);
        return res;
        
    }
};