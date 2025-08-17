class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp ;
        set<int> res;
        for(auto n:nums1){
            mp[n]++;
        }
        for(auto n:nums2){
            if (mp.count(n))
            res.insert(n);
        }
        vector<int> resv (res.begin(),res.end());
       return resv;
    }   
};