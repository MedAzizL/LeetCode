class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n=nums.size(),mx=0;
    if(n==0)
    return 0; 

    unordered_set <int> se;
    se.reserve(n);

    for(int num:nums){
        se.insert(num);
    }
    for(auto num:se){
        if( se.find(num-1)==se.end()){
            int curr=num,count=0;
            while(se.find(curr)!=se.end()){
                curr++;
                count++;
            }
            mx=max(mx,count);
        }
       
    }
    return mx;

        
    } 
};