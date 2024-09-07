/*
https://leetcode.com/problems/design-browser-history/
*/

class Node
{
public:
    string data;
    Node *next;
    Node *prev;
    Node(string data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

class BrowserHistory
{
public:
    Node *current = new Node("");
    BrowserHistory(string homepage)
    {
        current->data = homepage;
    }

    void visit(string url)
    {
        Node *newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }

    string back(int steps)
    {
        for (int i = 0; i < steps; i++)
        {
            if (current->prev != NULL)
                current = current->prev;
        }
        return current->data;
    }

    string forward(int steps)
    {
        for (int i = 0; i < steps; i++)
        {
            if (current->next != NULL)
                current = current->next;
        }
        return current->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */