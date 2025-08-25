class Solution {

private:
    void backtrack(string s , int op , int cl ,int n,vector<string>& res ){        

        if( s.length()==2*n)
        {res.push_back(s);
        return;
        }

        if(op<n)
    
        backtrack(s+"(",op+1,cl,n,res);
         
        if( cl < op)
        backtrack(s+")",op,cl+1,n,res);






    }
public:
    vector<string> generateParenthesis(int n) {

        vector<string> res;
        backtrack("",0,0,n,res);        
        return res;
      

   }
};