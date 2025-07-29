class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, char>> occ(62, {0, 0});

        for (char ch : s) {
            int idx;
            if (isdigit(ch)) {
               idx = ch - '0';  
            } else if (isupper(ch)) {
                idx = 10 + (ch - 'A');  
            } else if (islower(ch)) {
                idx = 36 + (ch - 'a');  
            } else {
                continue; 
            }
            occ[idx].first++;
            occ[idx].second = ch;
        }

        sort(occ.begin(), occ.end(), [](const pair<int, char>& a, const pair<int, char>&b)     {
            return a.first > b.first;
        });

        string res = "";
        for (int i = 0; i < 62; i++) {
            res.append(occ[i].first, occ[i].second);  
        }

        return res;
    }
};
