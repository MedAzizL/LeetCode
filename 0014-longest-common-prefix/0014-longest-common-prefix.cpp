class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n =strs.size();        
        string pred=strs[0];

        for(int i =1;i<n;i++){
            if(strs[i]=="")
            return ""; 
            for(int j=0;j<min(strs[i].size(),pred.size()); j++ )
            {
              
             if( strs[i][j]!= pred[j])
             {pred= strs[i].substr(0,j);
             break;}
             if(j==strs[i].length()-1)
             pred=strs[i];
            }
        }
        return pred;
    }
};