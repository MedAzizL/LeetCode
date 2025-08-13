class Solution {
public:
    string removeStars(string s) {
        int n=s.length();
        for(int i=n-1; i>=0 ; i--) {

            if( s[i]!='*' && s[i+1]=='*')
            {
                s.erase(i,2);
            }

        }
        return s ;

    }
};