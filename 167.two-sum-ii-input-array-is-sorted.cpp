/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int start = 0;
        int end = numbers.size() - 1;
        while (start < end)
        {
            if (numbers[start] + numbers[end] == target)
            {
                break; 
            }
            else if (numbers[start] + numbers[end] < target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return {start + 1, end + 1};
    }
};
// @lc code=end
