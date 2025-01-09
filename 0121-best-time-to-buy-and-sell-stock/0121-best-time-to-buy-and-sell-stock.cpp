class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = INT_MAX;
        int maxProfit = 0;
        int Profit;
        for(int i = 0; i < prices.size(); i++)
        {
            if(buyPrice < prices[i])
            {
                Profit = prices[i] - buyPrice;
                maxProfit = maxProfit > Profit? maxProfit : Profit;
            }
            else buyPrice = prices[i];
        }
        return maxProfit;
    }
};