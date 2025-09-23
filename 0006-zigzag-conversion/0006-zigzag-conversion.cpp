class Solution {
public:
    string convert(string s, int numRows) {
        int len = s.length();
        if (numRows == 1) return s; 

        int patterNum = len / (2 * numRows - 2);
        int rem = len % (2 * numRows - 2);   
        int remCol;
        if (rem == 0)
            remCol = 0;
        else if (rem <= numRows)
            remCol = 1;
        else
            remCol = 1 + (rem - numRows);

        int numCol = patterNum * (numRows - 1) + remCol;

        vector<vector<char>> matrix(numRows, vector<char>(numCol, '\0'));

        int colPt = 0, rowPt = 0;
        for (int i = 0; i < len; i++) {
            matrix[rowPt][colPt] = s[i];

            if (rowPt == 0) {
                
                rowPt++;
                continue;
            }

            if (rowPt < numRows - 1 && matrix[rowPt-1][colPt] != '\0'  ) {
                    rowPt++;
                }
             else {
                rowPt--;
                colPt++;
            }
        }

        string res;
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCol; j++) {
                if (matrix[i][j] != '\0')   
                    res += matrix[i][j];
            }
        }
        return res;
    }
};
