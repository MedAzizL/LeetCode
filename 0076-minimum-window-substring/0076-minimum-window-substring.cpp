class Solution {
public:
    bool compa(vector<int> temp , vector<int> occ){
        for(int i=0 ; i< 58 ;i++){
            if(occ[i] > temp[i])
            {
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        
        vector<int> occ(58,0);
        vector<int> temp(58,0);
        int mn=1e5+1;
        int resl=-1 , resr=-1;

        for(char c : t)
        {
            occ[c-'A']++;
        }

        int l = 0;
        for(int r = 0; r < s.length(); r++)
        {
            
            temp[s[r]-'A']++;
            
            while(compa(temp,occ))
            {
                if( r-l+1 < mn)
                {
                    mn=min(mn, r-l+1);
                    resl=l;
                    resr=r;
                }
                
                temp[s[l]-'A']--;
                l++;
            }

        }
        
        if(resl == -1 && resr == -1)
        return "";
        else
        return s.substr(resl,resr-resl+1);


    }
};