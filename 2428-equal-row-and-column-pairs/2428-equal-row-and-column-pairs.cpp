class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
       map<vector<int>,int> occ ;
        int res=0;
        int n=grid.size();

        for(int i= 0;i < n; i++){
           occ[grid[i]]++; 
        }

        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                temp.push_back(grid[j][i]);
            }
            if(occ[temp])
            {
                res+=occ[temp];
            }
        }

    
    return res;
    }
};