/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        ListNode *temp = head;
        int len = 0;
        while (temp)
        {
            temp = temp->next;
            len++;
        }
        if (len == n)
            return head->next;
        temp = head;
        for (int i = 1; i < len - n; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
// @lc code=end
