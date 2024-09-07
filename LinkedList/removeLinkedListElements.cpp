ListNode *removeElements(ListNode *head, int val)
{
    // Handle the case where the head itself needs to be deleted
    while (head != NULL && head->val == val)
    {
        ListNode *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    // If the list is empty after removing the head nodes
    if (head == NULL)
        return NULL;

    ListNode *tmp = head;

    while (tmp != NULL && tmp->next != NULL)
    {
        if (tmp->next->val == val)
        {
            ListNode *deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
        }
        else
        {
            tmp = tmp->next;
        }
    }

    return head;
};