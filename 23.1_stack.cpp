#include <bits/stdc++.h>
using namespace std;
#define n 100

class stk
{

    int *arr;
    int top;

public:
    stk()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {

        if (top == -1)
        {
            cout << "No Element to Pop" << endl;
            return;
        }

        top--;
    }

    int Top()
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    stk st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;

    return 0;
}