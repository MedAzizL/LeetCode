class Solution {
private:
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

public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> res = {""};

        for (char d : digits) {
            vector<string> temp;
            for (string st : res) {
                for (char c : keypad[d]) {
                    temp.push_back(st + c);
                }
            }
            res.swap(temp); 
        }
        return res;
    }
};
