#include <bits/stdc++.h>
using namespace std;

void subString(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    subString(ros, ans);
    subString(ros, ans + ch);
}

int main()
{
    subString("ABC", " ");
    cout << endl;
    return 0;
}