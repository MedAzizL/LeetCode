class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
     uint32_t ans = 0;
        int index = 31;

        for(int i=0;i<32;i++){
            uint32_t tmp = (1 << i);
            if( ( n & tmp) !=0)
            {ans+=(1 << index);}

            index--;

        }


        return ans;
    }

};