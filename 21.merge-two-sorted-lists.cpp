/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        ListNode *head = new ListNode(0);
        ListNode *curptr = head;
        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                curptr->next = new ListNode(list1->val);
                list1 = list1->next;
                curptr = curptr->next;
            }
            else
            {
                curptr->next = new ListNode(list2->val);
                list2 = list2->next;
                curptr = curptr->next;
            }
        }
        while (list1)
        {
            curptr->next = new ListNode(list1->val);
            list1 = list1->next;
            curptr = curptr->next;
        }
        while (list2)
        {
            curptr->next = new ListNode(list2->val);
            list2 = list2->next;
            curptr = curptr->next;
        }
        return head->next;
    }
};
// @lc code=end
