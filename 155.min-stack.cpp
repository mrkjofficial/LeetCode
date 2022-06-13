/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack
{
private:
    vector<pair<int, int>> v;

public:
    void push(int val)
    {
        if (v.empty())
        {
            v.push_back({val, val});
        }
        else
        {
            v.push_back({val, min(v.back().second, val)});
        }
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back().first;
    }

    int getMin()
    {
        return v.back().second;
    }
};

static bool start = []()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    return true;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
