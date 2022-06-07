/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            int numberToFind = target - nums[i];
            if (hash.find(numberToFind) != hash.end())
            {
                result.push_back(hash[numberToFind]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]] = i;
        }
        return result;
    }
};
// @lc code=end
