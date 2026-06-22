class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // the idea is to buy at lowest price and sell at max 

        int profit = 0, buy = INT_MAX;

        for(int val : prices){
            buy = min(buy, val);
            profit = max(profit, val-buy);
        }

        return profit;

    }
};
