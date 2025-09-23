class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        int n = responses.size();
        unordered_map<string,int> occ ;
        for(int i=0 ; i < n ;i++){

            int m = responses[i].size();
            set<string> unique(responses[i].begin(), responses[i].end());

            for(auto elem:unique){
                occ[elem]++;
            }
        }
        int mx=0;string res="";
        for(auto p:occ){
            if( p.second > mx){
                mx=p.second;
                res=p.first;
            }
            else if (p.second==mx && p.first < res){
                res=p.first;
            }
        }
        return res;


    }
};