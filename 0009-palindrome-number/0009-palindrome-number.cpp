class Solution {
public:
    bool isPalindrome(int x) {
        
        string num=to_string(x);
        int n=num.length();
        int i=0,j=n-1;
        while(i<j){
            if(num[i] != num[j])
            return false;
            i++,j--;

        }
    return true;
    }
};