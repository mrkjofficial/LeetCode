/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        vector<vector<int>> result(numRows, vector<int>(numRows, 1));
        result[0].resize(1);
        int row = 1;
        while (row < numRows)
        {
            result[row].resize(row + 1);
            for (int index = 0; index < row - 1; index++)
            {
                result[row][index + 1] = result[row - 1][index] + result[row - 1][index + 1];
            }
            row++;
        }
        return result;
    }
};
// @lc code=end
