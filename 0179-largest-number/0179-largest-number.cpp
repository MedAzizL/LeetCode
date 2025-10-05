class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> st;

        for(int x :nums){
            string str=to_string(x);
            st.push_back(str);
        }

        sort(st.begin(),st.end(),[](string &a, string &b) { return a + b > b + a; });

        if (st[0] == "0") return "0";
        
        string res="";
        for(string s:st){
            res+=s;
        }

        return res;


    }
};