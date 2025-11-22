class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> li, col;
        int m = matrix.size() , n= matrix[0].size();
        
        for(int i = 0; i < m; i++)
        {
            for( int j = 0; j < n; j++)
            {
                if( matrix[i][j]== 0)
                    {
                        li.insert(i);
                        col.insert(j);
                    }
            }
        }
        
        for(int l:li)
            for(int j=0 ; j < n; j++)
                matrix[l][j]=0;

        

        for(int c:col)
            for(int j = 0; j < m; j++)
                matrix[j][c]=0;
        
        return ;

    }
};
