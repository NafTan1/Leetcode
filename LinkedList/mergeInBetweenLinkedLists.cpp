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
    void deleteObject(ListNode *list1, int pos)
    {
        ListNode *tmp = list1;
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        ListNode *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }

    void insert_at_pos(ListNode *list1, int val, int pos)
    {
        ListNode *newNode = new ListNode(val);
        ListNode *tmp = list1;
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }

    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *tmp1 = list1;
        ListNode *tmp2 = list2;
        int loop_time = b - a;
        for (int i = 0; i <= loop_time; i++)
        {
            deleteObject(tmp1, a);
        }
        while (tmp2 != NULL)
        {
            insert_at_pos(tmp1, tmp2->val, a);
            a += 1;
            tmp2 = tmp2->next;
        }
        return list1;
    }
};