#include <bits/stdc++.h>
using namespace std;

bool test(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
        return true;
    return false;
}

int main()
{
    string s = "rat", t = "car";
    cout << test(s, t);

    return 0;
}