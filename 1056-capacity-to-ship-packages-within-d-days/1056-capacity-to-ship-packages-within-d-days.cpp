class Solution {
public:
    int d(vector<int>& w , int mid){

        int res=1,currw=0;

        for(int i=0;i<w.size();i++){

            if( currw + w[i] <= mid )
            {
                currw+=w[i];
            }
            else
            {
                 res++;
                 currw=w[i];
            }
            
        }

        return res;
    }


    int shipWithinDays(vector<int>& weights, int days) {

        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);

        while( l <= r){

            int mid=l +(r - l)/2;
            if( d(weights,mid) > days){

                l=mid+1;
            }
            else{
                r=mid-1;
            }

        }
        return l;
    }
};