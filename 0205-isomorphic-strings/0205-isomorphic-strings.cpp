class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        map<char,char> occ,occ2;

        for(int i=0;i<n;i++){
            if( !occ[s[i]] ){
                occ[s[i]]=t[i];
            }
            else {
                if( t[i]!= occ[s[i]] )
                return false;

            }
            if( !occ2[t[i]] ){
                occ2[t[i]]=s[i];
            }
             else {
                if( s[i]!= occ2[t[i]] )
                return false;

            }

            }

    
    return true; 
    }
};