class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int curr=customers[0][0]+customers[0][1];
        double totWait=customers[0][1];
        for(int i=1; i< customers.size(); i++ )
        {
            curr=max(curr,customers[i][0]);
            totWait+=curr-customers[i][0]+customers[i][1];
            curr+=customers[i][1];
        }
        return totWait/customers.size();
    }
};