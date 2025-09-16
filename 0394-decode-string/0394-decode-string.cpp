class Solution {
public:
    string decodeString(string s) {
        stack<string> str;
        stack<int> num;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            char c = s[i];

            if (isdigit(c)) {
                int val = 0;
                while (i < n && isdigit(s[i])) {
                    val = val * 10 + (s[i] - '0');
                    i++;
                }
                i--;
                num.push(val);
            }
            else if (isalpha(c)) {
                str.push(string(1, c));
            }
            else if (c == '[') {
                str.push("*");
            }
            else { 
                string tmp = "";
                while (str.top() != "*") {
                    string currt = str.top();
                    tmp = currt + tmp; 
                    str.pop();
                }
                str.pop(); 

                int times = num.top();
                num.pop();

                string repeated = "";
                for (int k = 0; k < times; k++) repeated += tmp;
                str.push(repeated);
            }
        }

        string res = "";
        while (!str.empty()) {
            string currtop = str.top();
            res = currtop + res;
            str.pop();
        }
        return res;
    }
};
