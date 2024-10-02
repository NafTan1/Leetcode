/*
Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buy = prices[0];
        int profit = 0;
        int n = prices.size();
        for (int i = 1; i < n; i++)
        {
            if (prices[i] < buy)
                buy = prices[i];
            profit = max(profit, prices[i] - buy);
        }
        return profit;
    }
};