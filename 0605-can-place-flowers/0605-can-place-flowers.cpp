class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        if(flowerbed.size()==1)
        {
            if( flowerbed[0]==0)
             count++;
             
        }
        else{
        for(int i=0; i< flowerbed.size() ; i++){
            if( i ==0){
                if (flowerbed[i+1]==0 && flowerbed[i]==0)
                {   
                    count++;
                    flowerbed[i]=1;
                }
            }
            else if( i > 0 && i < flowerbed.size() - 1 ){
                if( flowerbed[i]==0 && flowerbed[i+1]==0 && flowerbed[i-1]==0)
                    {   
                        count++;
                        flowerbed[i]=1;
                    }
            }
            else{
                if( flowerbed[i]==0 && flowerbed[i-1]==0)
                {    
                    count++;
                    flowerbed[i]=1;
                }
            }
        }
        }
        return (count>=n);
    }
};