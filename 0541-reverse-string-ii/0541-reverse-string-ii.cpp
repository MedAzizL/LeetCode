class Solution {
public:
    string reverseStr(string s, int k) {
        int len = s.length();
        int q = len / (2 * k), r = len % (2 * k);

        for (int i = 0; i < q; i++) {
            int start = i * 2 * k;                
            reverse(s.begin() + start, s.begin() + start + k);
        }

        int remStart = q * 2 * k;
        if (r >= k) {
            reverse(s.begin() + remStart, s.begin() + remStart + k);
        } else {
            reverse(s.begin() + remStart, s.end());
        }

        return s;
    }
};
