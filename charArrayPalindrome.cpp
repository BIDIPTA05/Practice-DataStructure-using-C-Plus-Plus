#include <bits/stdc++.h>
using namespace std;

int main()
{

        int n;
        cin >> n;
        char ch[n + 1];
        cin >> ch;
        bool flag = 1;

        for (int i = 0; i < n; i++)
        {
                if (ch[i] != ch[n - 1 - i])
                {
                        flag = 0;
                        break;
                }
        }
        if (flag == 1)
        {
                cout << "Palindrome";
        }
        else
        {
                cout << "Not Palindrome";
        }

        return 0;
}