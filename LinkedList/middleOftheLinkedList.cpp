
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
    ListNode *middleNode(ListNode *head)
    {
        int sz = list_size(head);
        ListNode *tmp = head;
        for (int i = 0; i < (sz / 2); i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};