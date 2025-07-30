class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        while(i>=0 &&  s[i]==' ' ){
            i--;
        }
        string res="";
        while(i>=0 && s[i]!=' '){
            res+=s[i];
            i--;
        }
        return res.length();
    }

};