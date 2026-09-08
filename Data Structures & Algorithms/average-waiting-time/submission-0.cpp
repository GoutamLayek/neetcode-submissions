class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double time = 0, TotalTime = 0;

        for(auto cust : customers){

            time = max(time, (double)cust[0]) + cust[1];
 
            TotalTime += time - cust[0];
        }

        return TotalTime / customers.size();
    }
};