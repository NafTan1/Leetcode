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
    ListNode *swapNodes(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *tmp1 = head;
        ListNode *tmp2 = head;
        int sz = list_size(head);
        int front = k - 1;
        int back = sz - (k - 1);
        for (int i = 0; i < front - 1; i++)
        {
            tmp1 = tmp1->next;
        }

        cout << "tmp1 " << tmp1->next->val << endl;
        for (int i = 0; i < back - 1; i++)
        {
            // cout << tmp2->val << endl;
            tmp2 = tmp2->next;
        }
        cout << "tmp2 " << tmp2->val << endl;
        if (front == 0)
        {
            swap(tmp1->val, tmp2->val);
        }
        else
        {
            swap(tmp1->next->val, tmp2->val);
        }

        return head;
    }
};