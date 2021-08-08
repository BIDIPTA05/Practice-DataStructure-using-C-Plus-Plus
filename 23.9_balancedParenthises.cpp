#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int len = s.length();
    stack<char> st;
    bool ans = true;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '{' || s[i] == '[' or s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (!st.empty() && s[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (!st.empty() && s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    if (!st.empty())
    {
        return false;
    }
    return ans;
}

int main()
{

    string s = "{[({})]}";

    if (isValid(s))
    {
        cout << "Valid String";
    }
    else
    {
        cout << "Invalid String";
    }

    return 0;
}