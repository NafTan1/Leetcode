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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *tmp = headA;
        ListNode *tmp2 = headB;
        for (ListNode *i = tmp; i != NULL; i = i->next)
        {
            for (ListNode *j = tmp2; j != NULL; j = j->next)
            {
                if (i == j)
                {
                    return j;
                }
            }
        }
        return NULL;
    }
};