class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<string,int> occ;

        for(int i = 0; i < arr1.size(); i++)
        {
            string curr= to_string(arr1[i]);
            for(int i = 0; i < curr.length(); i++)
            {
                string pref = curr.substr(0,i+1);    
                occ[pref]++;

            }
        }
        int res = 0;
        for( int i = 0; i < arr2.size() ; i++)
        {
            string curr= to_string(arr2[i]);
            for(int i = 0; i < curr.length(); i++)
            {
                string pref = curr.substr(0,i+1);    
                
                if( occ[pref] )
                {
                    res = max( res , (int) pref.length() );
                }

            }

        }



    return res;
    }
};