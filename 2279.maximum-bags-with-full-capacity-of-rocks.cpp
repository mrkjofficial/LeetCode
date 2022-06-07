/*
 * @lc app=leetcode id=2279 lang=cpp
 *
 * [2279] Maximum Bags With Full Capacity of Rocks
 */

// @lc code=start
class Solution
{
public:
    int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n = capacity.size();
        transform(capacity.begin(), capacity.end(), rocks.begin(), rocks.begin(), minus<int>());
        sort(rocks.begin(), rocks.end());
        int count = 0;
        for (auto space : rocks)
        {
            if (space == 0)
            {
                count++;
            }
            else if (additionalRocks - space >= 0)
            {
                count++;
                additionalRocks -= space;
            }
        }
        return count;
    }
};
// @lc code=end
