class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        map<int,int> occ ;

        for(int num:nums){
            if(occ[num]<2)
            occ[num]++;

        }

       
            
        int j=0;
        for(auto p:occ){

            int steps=p.second;

            while(steps--){
                nums[j++]=p.first;
            }


        }



        return j;
        

    



    }
};