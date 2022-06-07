/*
 * @lc app=leetcode id=1385 lang=cpp
 *
 * [1385] Find the Distance Value Between Two Arrays
 */

// @lc code=start
class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int count = arr1.size();
        for (int a : arr1)
        {
            for (int b : arr2)
            {
                if (abs(a - b) <= d)
                {
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};
// @lc code=end
