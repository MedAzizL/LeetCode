class Solution {
private:
    long long  time(vector<int>& p ,int k){
        long long  tot=0;
        for(int i = 0; i< p.size() ; i++){
            tot += (p[i] + k - 1 ) / k; 
        }
        return tot;
    }
public:

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int l=1  , r= 1e9;
        int    ans ;

        while( l <= r){
            int mid =(l+r)/2;
            if( time( piles , mid) <= h){
                ans= mid;
                r=mid-1;
            }
            else 
            l=mid+1;

        }
        return ans ;
        
    }
};
