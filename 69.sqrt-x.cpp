/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int start = 0;
        int end = x;
        long mid;
        int ans = -1;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            long square = mid * mid;
            if (square == x)
            {
                return mid;
            }
            if (square < x)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};
// @lc code=end
