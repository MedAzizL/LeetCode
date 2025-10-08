class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

    int l=0;
    int n=s.length();
    unordered_map<string,int> occ;
    vector<string> res;

    for(int i=0;i<=n-10;i++){

        string tmp = s.substr(i,10);
        occ[tmp]++;

    }
    for(auto p:occ){
        if(p.second>1)
        res.push_back(p.first);
    }


    return res;
    }
};