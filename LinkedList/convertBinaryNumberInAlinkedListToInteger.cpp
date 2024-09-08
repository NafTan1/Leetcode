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
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    int getDecimalValue(ListNode *head)
    {
        ListNode *tmp = head;
        int sz = size(head);
        int x = pow(2, sz - 1);
        int sum = 0;
        while (tmp != NULL)
        {
            if (tmp->val == 1)
            {
                sum += x;
            }
            x /= 2;
            tmp = tmp->next;
        }

        return sum;
    }
};