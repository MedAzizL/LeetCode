class Solution {
public:
    int maxScore(vector<int>& nums) {
     
     vector<int> pos ,neg;
     for(int num :nums){

        if( num > 0)
         pos.push_back(num);
        else
        neg.push_back(num);

     }
     sort(pos.begin(),pos.end());
     sort(neg.begin(),neg.end(),greater<int>());
     int pt1=0 , pt2=0 ,res =0;
     long long prefsum=0;
     if(pos.empty())
        return 0;
    if(neg.empty())
        return pos.size();
    
     // 1 2 3  
     // 0 -1 - 3 -3 
        while( pt1 < pos.size() && pt2 < neg.size())
        {
            if( prefsum >  abs(neg[pt2]) )
                {   
                    res++;
                    prefsum+=neg[pt2];
                    pt2++;
               }
            else 
                {
                    prefsum+=pos[pt1];
                    pt1++;
                    res++;
                }

        }

        while(pt1 < pos.size())
        {
            res++;
            pt1++;
        }
        while( pt2<neg.size())
        {
            prefsum+=neg[pt2];
            pt2++;
            if(prefsum>0)
            res++;
        }
        
     
        return res;

    }
};