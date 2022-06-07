/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        if (!head || !(head->next))
        {
            return head;
        }
        ListNode *node1 = head, *node2 = head->next;
        while (node2)
        {
            if (node1->val == node2->val)
            {
                ListNode *temp = node2;
                node2 = node2->next;
                node1->next = node2;
                delete temp;
            }
            else
            {
                node1 = node1->next;
                node2 = node2->next;
            }
        }
        return head;
    }
};
// @lc code=end
