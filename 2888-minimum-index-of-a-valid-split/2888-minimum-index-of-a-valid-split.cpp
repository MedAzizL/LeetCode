class Solution {
public:
    int minimumIndex(vector<int>& nums) {
    
        int n = nums.size();
        vector<int> pref( n , 0);

        int dom = 0 , mx = 0 ; 
        unordered_map<int,int> occ;

        for( int i = 0; i < n; i++){
            occ[nums[i]] ++ ;

        }

        for(auto p:occ){

            if(p.second > mx){

                mx = p.second;
                dom = p.first;
            }
        }
        

        for(int i = 0; i < n; i++)
        {
            if( nums[i] == dom ){
                if( i )
                pref[i] = pref[i - 1] + 1;
                else
                pref[i]=1;

            }
            else{
                if( i )
                pref[i] = pref[ i - 1] -1;
                else
                pref[i] = -1;
            }

        }



        for(int i = 0; i < n; i++)
        {
            if( pref[i] > 0 && pref[n-1] - pref[i] > 0){
                
                return i;
            }

        }

        return -1;

    }
};