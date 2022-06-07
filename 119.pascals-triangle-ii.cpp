/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        vector<vector<int>> result(rowIndex + 1, vector<int>(rowIndex + 1, 1));
        result[0].resize(1);
        int row = 1;
        while (row <= rowIndex)
        {
            result[row].resize(row + 1);
            for (int index = 0; index < row - 1; index++)
            {
                result[row][index + 1] = result[row - 1][index] + result[row - 1][index + 1];
            }
            row++;
        }
        return result[rowIndex];
    }
};
// @lc code=end
