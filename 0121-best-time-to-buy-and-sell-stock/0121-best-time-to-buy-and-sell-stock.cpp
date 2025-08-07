class Solution {
public:
    int maxProfit(vector<int>& prices) {
     
        int n=prices.size();
        int res=0;
        vector<int> mn(n);
        mn[0]=prices[0];
        for(int i=1; i<n; i++){
            mn[i]=min(mn[i-1],prices[i]);
        }

        for(int i=0 ; i<n; i++){
            res=max(res, prices[i]-mn[i] ) ;
        }


     return res;
    }
};