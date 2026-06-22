class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();
        if(n == 2)
         return min(cost[0], cost[1]);

        vector<int>nums(n+1,0);

        for(int i = 2; i < n+1; i++){
            int val1 = nums[i-1] + cost[i-1];
            int val2 = nums[i-2] + cost[i-2];
            nums[i] = min(val1, val2);
        }

        return nums[n];
    }
};
