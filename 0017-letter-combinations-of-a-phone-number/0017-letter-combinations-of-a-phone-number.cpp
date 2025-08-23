class Solution {
private:
    vector<string> res;
    map<char, vector<char>> keypad = {
        {'2', {'a', 'b', 'c'}},
        {'3', {'d', 'e', 'f'}},
        {'4', {'g', 'h', 'i'}},
        {'5', {'j', 'k', 'l'}},
        {'6', {'m', 'n', 'o'}},
        {'7', {'p', 'q', 'r', 's'}},
        {'8', {'t', 'u', 'v'}},
        {'9', {'w', 'x', 'y', 'z'}}
    };
    void backtrack( string& digits,int index,string s){
        
        if( index== digits.size())
       { res.push_back(s);
        return;
       }
        
        for(char c: keypad[digits[index]])
        {
            backtrack(digits,index+1,s+c);

        }

    }

public:
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)
        return {};
        string s;
        backtrack(digits,0,s);
        return res;
    
    }
};
