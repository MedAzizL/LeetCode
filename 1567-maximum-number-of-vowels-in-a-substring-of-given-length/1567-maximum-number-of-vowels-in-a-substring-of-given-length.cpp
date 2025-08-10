class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> sv ={'a','e','o','i','u'};
        int n=s.length(),maxVow=0,l=0,curr=0;
        
        for(int r=0;r<n;r++){
           if(sv.find(s[r]) !=sv.end()){
            curr++;
           }
           
           if(r-l+1==k)
               maxVow=max(maxVow,curr);

            else if (r-l+1>k)
            {
                if(sv.find(s[l]) !=sv.end())
                curr--;
                l++;    
                maxVow=max(maxVow,curr);
            }

        }
       
        return maxVow;
    }
};