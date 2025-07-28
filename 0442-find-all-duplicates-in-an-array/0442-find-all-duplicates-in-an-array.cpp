class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n+1);
        for(int num :nums){
            res[num]++;    
        }
        int j=0;
        for(int i=0;i<=n;i++){
            if(res[i]==2){
                res[j]=i;
                j++;
            }
        }
        return vector<int>(res.begin(),res.begin()+j);

        
    }
};