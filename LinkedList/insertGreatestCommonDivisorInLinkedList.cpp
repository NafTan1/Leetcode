/*
https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/
*/

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
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        ListNode *tmp = head;
        while (tmp->next != NULL)
        {
            int g = __gcd(tmp->val, tmp->next->val);
            ListNode *newNode = new ListNode(g);
            newNode->next = tmp->next;
            tmp->next = newNode;
            tmp = tmp->next->next;
        }
        return head;
    }
};