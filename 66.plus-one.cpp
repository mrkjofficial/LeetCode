/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (digits.at(i) < 9)
            {
                digits.at(i)++;
                return digits;
            }
            digits.at(i) = 0;
        }
        digits.push_back(0);
        digits.at(0) = 1;
        return digits;
    }
};
// @lc code=end
