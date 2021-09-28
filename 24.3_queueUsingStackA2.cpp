// Using 1 Stacks and Inbuilt Function Stack

#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> st;

public:
    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        if (st.empty())
        {
            cout << "queue is empty" << endl;
            return -1;
        }

        int x = st.top();
        st.pop();
        if (st.empty())
        {
            return x;
        }
        int item = pop();
        st.push(x);
        return item;
    }

    bool empty()
    {
        if (st.empty())
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

    return 0;
}