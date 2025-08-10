class Solution {
public:
    string reverseWords(string s) {
        stack<string> st ;
        int i=0 , j= s.length() - 1 ;
        while(s[i]==' ')
        i++;
        while( s[j] ==' ')
        j--;
        string curr="";
        for(int k=i;k<=j;k++){
            if(s[k]!=' ')
            curr+=s[k];
            else 
            { 
            if(curr.length()>0)
            st.push(curr);
            curr="";
            }

        }
        st.push(curr);
        string res="";
        while(!st.empty()){
            string head =st.top();
            res+=head;
            res+=' ';
            st.pop();
        }
        res.erase(res.size()-1);

    return res;
    }





        

    
};