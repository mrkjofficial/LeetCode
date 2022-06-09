/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        ListNode *head = new ListNode();
        ListNode *curptr = head;
        int carry = 0;
        while (l1 || l2 || carry)
        {
            int value = 0;
            if (l1)
            {
                value += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                value += l2->val;
                l2 = l2->next;
            }
            value += carry;
            carry = value / 10;
            curptr->next = new ListNode(value % 10);
            curptr = curptr->next;
        }
        return head->next;
    }
};
// @lc code=end
