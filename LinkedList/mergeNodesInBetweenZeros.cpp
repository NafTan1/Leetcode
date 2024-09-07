class Solution
{
public:
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *tmp = head;
        ListNode *head2 = NULL;
        ListNode *tail2 = NULL;
        int sum = 0;
        while (tmp != NULL)
        {
            if (tmp->val != 0)
            {
                sum += tmp->val;
            }
            else if (tmp->val == 0 && sum != 0)
            {
                insert_tail(head2, tail2, sum);
                sum = 0;
            }
            tmp = tmp->next;
        }
        return head2;
    }
};