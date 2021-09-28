// Using 2 Stacks and Dequeue operation costly

#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> st1;
    stack<int> st2;

public:
    void push(int x)
    {
        st1.push(x);
    }

    int pop()
    {
        if (st1.empty() and st2.empty())
        {
            cout << "queue is empty" << endl;
            return -1;
        }

        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int topVal = st2.top();
        st2.pop();
        return topVal;
    }

    bool empty()
    {
        if (st1.empty() && st2.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.pop() << endl;
    q.push(6);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;

    return 0;
}