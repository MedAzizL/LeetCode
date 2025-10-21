class Solution {
public:
    int partitionString(string s) {
        int res=1;
        set<char> se;
        for( int i = 0; i < s.length(); i++)
        {
            if( se.find(s[i]) != se.end() )
            {
                res++;
                set<char>().swap(se);
                
            }
            se.insert(s[i]);
            
        }
        return res;
    }
};