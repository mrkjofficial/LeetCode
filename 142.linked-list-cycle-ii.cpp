/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        if (head == NULL)
        {
            return nullptr;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *start = head;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                while (start != slow)
                {
                    slow = slow->next;
                    start = start->next;
                }
                return start;
            }
        }
        return nullptr;
    }
};
// @lc code=end
