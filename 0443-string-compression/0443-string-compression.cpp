class Solution {
public:
    int compress(vector<char>& chars) {

        int j=0 , curr=1;
        for(int i=0 ;i< chars.size()-1;i++ ){

            if(chars[i]!=chars[i+1] ){
                chars[j]=chars[i];
                j++;
                if(curr > 1)
                {   
                    string curst=to_string(curr);
                    for(char c:curst)
                    chars[j++]=c;
                    curr=1;
                }
            }
            else 
            curr++;
        }

        chars[j++]=chars[chars.size()-1];

        if(curr >1)
         {
            string curstr=to_string(curr);
            for(char c:curstr)
            chars[j++]=c;
        }

        return j;


    }
};