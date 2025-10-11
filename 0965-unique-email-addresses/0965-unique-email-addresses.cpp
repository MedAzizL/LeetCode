class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, int> mp;
        for(auto x: emails) {
            bool fl = true, at = false;
            string s;
            for(auto c: x) {
                if(!at && c == '.')
                    continue;
                else if(!at && c == '+') 
                    fl = false;
                else if(c == '@') 
                    at = true, fl = true, s.push_back(c);
                else if(fl) 
                    s.push_back(c);
            }
            mp[s]++;
        }
        return mp.size();
    }
};