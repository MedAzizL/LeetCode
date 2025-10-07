class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD = 1000000007;
        unordered_map<int,int> count;
        count[0]=1;
        long long prefSum=0,res=0;

        for(int num : arr) {
            prefSum+=num;
            if( prefSum & 1) {
                res+=count[0] % MOD;
            }
            else{
                res+=count[1] % MOD;
            }
            count[prefSum%2]++;
        }
        
        return res % MOD ;


    }
};