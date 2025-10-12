class Solution {
public:
    int appendCharacters(string s, string t) {

        int pt=0 ;
        
        for(int i=0; i<s.length(); i++)
        {   
            if( s[i]== t[pt])
                pt++;
            
            if(pt==t.length())
            return 0;
            
            
        }

        return t.length()-pt;
    }
};