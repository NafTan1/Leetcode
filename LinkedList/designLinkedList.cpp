/*
Problem Link: https://leetcode.com/problems/design-linked-list/
*/

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class MyLinkedList
{
public:
    Node *head = NULL;
    MyLinkedList()
    {
    }

    int size(Node *head)
    {
        int cnt = 0;
        Node *tmp = head;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }

    int get(int index)
    {
        int sz = size(head);
        Node *tmp = head;
        if (index >= sz)
            return -1;
        for (int i = 0; i < index; i++)
        {
            tmp = tmp->next;
        }
        return tmp->val;
    }

    void addAtHead(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }

    void addAtIndex(int index, int val)
    {
        int sz = size(head);
        if (index > sz)
            return;
        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        Node *tmp = head;
        Node *newNode = new Node(val);
        if (index == sz)
        {
            addAtTail(val);
            return;
        }
        for (int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }

    void deleteAtIndex(int index)
    {
        int sz = size(head);
        if (index >= sz)
            return;
        if (index == 0)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *tmp = head;
        for (int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
            if (tmp == NULL)
                return;
        }
        if (tmp->next == NULL)
        {
            delete tmp;
            return;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */