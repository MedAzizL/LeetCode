class NumMatrix {

    
private:
    vector<vector<int>> matrix;
    vector<vector<int>> pref;

    void calculatePref(vector<vector<int>> matrix , vector<vector<int>>& pref){

            int n=matrix.size(),m=matrix[0].size();

            for(int i=0 ;i<n; i++){
            
                pref[i][0]=matrix[i][0];
                
                for(int j=1;j<m;j++){
                    pref[i][j]=pref[i][j-1]+matrix[i][j];
                }

            }

       
        }
  


public:

    NumMatrix(vector<vector<int>>& matrix) {

        this->matrix=matrix;
        int n=matrix.size(),m=matrix[0].size();
        pref=vector<vector<int>>(n,vector<int>(m,0));
        calculatePref(matrix,pref);
    }

    
    int sumRegion(int row1, int col1, int row2, int col2) {

        int sum=0;
        for(int i= row1 ;i<=row2;i++)
        {
            if(col1>0)
            sum+= pref[i][col2]-pref[i][col1-1];
            else
            sum+=pref[i][col2];

        } 
        return sum;
      
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */