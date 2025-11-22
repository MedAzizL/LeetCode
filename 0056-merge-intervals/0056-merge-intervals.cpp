class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](const vector<int>& a,const vector<int>& b) 
        
          {  return a[0]< b[0] ; }
         );

         vector<vector<int>> res;
         
        int currSt=intervals[0][0];
        int  currEnd=intervals[0][1];
         
         for(int i=1; i<n ;i++){

            if(intervals[i][0] <= currEnd )
                currEnd= max(currEnd, intervals[i][1]);
            
            else
            {
                res.push_back({currSt,currEnd});
                currSt=intervals[i][0];
                currEnd=intervals[i][1];

            }

         }
         res.push_back({currSt,currEnd});


        return res; 
    }
};