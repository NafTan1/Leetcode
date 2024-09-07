class Solution
{
public:
    int list_size(ListNode *head)
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int sz = list_size(head);
        int pos = sz - n;
        if (sz == 0)
            return head;
        if (pos == 0)
        {
            ListNode *deleteNode = head;
            head = head->next;
            delete deleteNode;
        }
        else
        {
            ListNode *tmp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                tmp = tmp->next;
            }
            ListNode *deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
        }
        return head;
    }
};