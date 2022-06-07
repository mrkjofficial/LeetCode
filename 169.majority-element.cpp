/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n = nums.size() / 2;
        unordered_map<int, int> counter;
        for (int num : nums)
        {
            if (++counter[num] > n)
            {
                return num;
            }
        }
        return 0;
    }
};
// @lc code=end
