class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        if( s==t)
        return true; 
        
        int pt=0;
        for(int i=0;i<t.length();i++){
            if(t[i]==s[pt])
            pt++;

            if ( pt == s.length())
            return true;
        }
        return false;
    }

    
};