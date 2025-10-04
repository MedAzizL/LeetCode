class Solution {
public:
    string removeDuplicateLetters(string s) {

        // cbacdcbc
        // acb
        vector<int> occ(26,0),pushed(26,0);
        for(char c : s){
            occ[c-'a']++;
        }

        int n= s.length();
        stack<char> st;

        for(int i = 0; i < n; i++){
            
            while(!st.empty() && s[i]<=st.top() && occ[st.top() - 'a'] > 1 && !pushed[s[i]-'a']){

                occ[st.top() - 'a']--;
                pushed[st.top()-'a']--;
                st.pop();

            }
            if(!pushed[s[i]-'a'])
            {
                st.push(s[i]);
                pushed[s[i]-'a']++;
            }
            else{
               occ[s[i] - 'a']--; 
            }
        }
        string res="";

        while(!st.empty()){
            res= st.top() + res ;
            st.pop();
        }


        return res;
    }
};