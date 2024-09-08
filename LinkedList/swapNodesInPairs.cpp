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
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *point = dummy;
        while (point->next != NULL && point->next->next != NULL)
        {
            // assigning swap nodes
            ListNode *swap1 = point->next;
            ListNode *swap2 = point->next->next;
            // swap operation
            swap1->next = swap2->next;
            swap2->next = swap1;
            // changing point
            point->next = swap2;
            point = swap1;
        }
        // value of dummy got changed at first iteration
        return dummy->next;
    }
};