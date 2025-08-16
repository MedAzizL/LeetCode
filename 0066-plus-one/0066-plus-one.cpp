class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n= digits.size();
        bool ok=false;
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9)
            {
            digits[i]+=1; 
            ok=true;
            break;
            }
            else {
                digits[i]=0;
            }
        }
        if (!ok)
        {   
             vector<int> res(n+1,0);
             res[0]=1;
             return res;
        }
        else
        return  digits ;

    }
};