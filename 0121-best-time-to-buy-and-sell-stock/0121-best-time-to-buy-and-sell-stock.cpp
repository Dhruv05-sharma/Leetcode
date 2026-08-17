class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy[100000];
        buy[0] = INT_MAX;
        int n = prices.size();
        int profit = INT_MIN;
        for(int i=1; i<n; i++)
        {
            buy[i] = min(buy[i-1],prices[i-1]);
        }
        for(int i=0; i<n; i++)
        {
            profit = max(profit,prices[i] - buy[i]);
        }
        if(profit > 0)
        {
            return profit;
        }
        else
        {
            return 0;
        }
        return {};
    }
};