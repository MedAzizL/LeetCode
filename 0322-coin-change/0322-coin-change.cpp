class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int> dp(1e4+1,-1);
        dp[0]=0;

        for(int i=1 ; i<=1e4 ; i++){

            for(int j=0;j<n;j++){

                if(i-coins[j]>=0 && dp[i - coins[j]] != -1 )
                {
                        if( dp[i]!=-1)
                        dp[i]=min(dp[i],dp[i-coins[j]]+1);
                        else
                        dp[i]=max(dp[i],dp[i-coins[j]]+1);
                }

            }
               
        }
            
        return dp[amount];
        }
    };
