/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

// @lc code=start
class Solution
{
public:
    int countPrimes(int n)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int count = 0;
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;
        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                count++;
                for (int j = 2 * i; j < n; j = j + i)
                {
                    prime[j] = false;
                }
            }
        }
        return count;
    }
};
// @lc code=end
