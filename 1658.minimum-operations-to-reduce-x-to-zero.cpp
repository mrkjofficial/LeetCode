/*
 * @lc app=leetcode id=1658 lang=cpp
 *
 * [1658] Minimum Operations to Reduce X to Zero
 */

// @lc code=start
class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int sum = 0;
        for (int num : nums)
        {
            sum += num;
        }
        int maxLength = -1, currSum = 0;
        for (int l = 0, r = 0; r < nums.size(); r++)
        {
            currSum += nums[r];
            while (l <= r && currSum > sum - x)
            {
                currSum -= nums[l++];
            }
            if (currSum == sum - x)
            {
                maxLength = max(maxLength, r - l + 1);
            }
        }
        return maxLength == -1 ? -1 : nums.size() - maxLength;
    }
};
// @lc code=end
