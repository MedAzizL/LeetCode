class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
    int n=nums.size();
    
    vector<int> pref(n+2);
    pref[0]=0;
    for(int i=1;i<=n;i++)
    {
        pref[i]=pref[i-1]+nums[i-1];
    }
    pref[n+1]=pref[n];


    for(int i=1;i<=n;i++){
        if( pref[i-1]==pref[n+1]-pref[i])
        return i-1;
    }
    return -1;

    }
};