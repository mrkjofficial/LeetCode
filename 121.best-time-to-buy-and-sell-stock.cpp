/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n = prices.size();
        int leastPrice = INT_MAX, maxProfit = 0, profit = 0;
        for (int i = 0; i < n; i++)
        {
            if (leastPrice > prices[i])
            {
                leastPrice = prices[i];
            }
            profit = prices[i] - leastPrice;
            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};
// @lc code=end
