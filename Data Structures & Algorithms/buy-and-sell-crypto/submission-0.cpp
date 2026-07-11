class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            buyPrice = min(buyPrice, prices[i]);          // Lowest price so far
            maxProfit = max(maxProfit, prices[i] - buyPrice); // Profit if sold today
        }

        return maxProfit;
    }
};