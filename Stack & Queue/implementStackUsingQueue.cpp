class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        queue<int> q2;
        int k;
        while (!q.empty())
        {
            k = q.front();
            q.pop();
            if (q.empty())
            {
                break;
            }
            q2.push(k);
        }
        q = q2;
        return k;
    }

    int top()
    {
        queue<int> q2;
        int k;
        while (!q.empty())
        {
            k = q.front();
            q.pop();

            q2.push(k);
        }
        q = q2;
        return k;
    }

    bool empty()
    {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */