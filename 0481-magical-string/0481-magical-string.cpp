class Solution {
public:
    int magicalString(int n) {
           

        if( n<=3)
        return 1;

        string st="122";
        string curr="122";
        int pt=3;
    
        while(curr.length()<n){
           
            char nb=st.back()-'0'; 
            if( curr.back()=='2')
                for(int i=1; i<=nb && curr.length()<n ;i++)
                    curr+='1';
           else if( curr.back()=='1')
                for(int i=1; i<=nb && curr.length()<n ;i++)
                    curr+='2';
            
                st+=curr[pt];
                pt++;
        }
        int res=0;
        for(char c: curr)
            if(c=='1')
                res++;
        

    return res;
    }
};