class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
          int n = people.size();
          int l =0, r = n-1;
          int res = 0;
          
          sort(people.begin(), people.end());
        
          while(l < r){

            if( people[r]+people[l] > limit){
                r--;
            }

            else {
                l++; r--;
            }

            res++;
          }

          res+= (l==r) ? 1 : 0;
          
          return res;

    }
};