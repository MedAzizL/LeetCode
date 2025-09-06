
class Solution {
private:
    bool palindrome(string s){
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j])
            return false;
            i++,j--;
        }

        return true;
    }
    void backtrack(string s ,string curr,int i,vector<string> ds,vector<vector<string>>& res){

        if( i==s.length())
        return;

        curr+=s[i];
        if(palindrome(curr))
        {   
            ds.push_back(curr);

            if(i==s.length()-1){
                res.push_back(ds);
                return;
            }
            backtrack(s,"",i+1,ds,res);

            ds.pop_back();
        }
            backtrack(s,curr,i+1,ds,res);

       
    }
public:
    vector<vector<string>> partition(string s) {
        
        vector<string> ds;
        vector<vector<string>> res;
        backtrack(s,"",0,ds,res);
        return res;

    }
};









