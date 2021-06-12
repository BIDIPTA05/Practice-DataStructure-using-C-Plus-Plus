// Form the Biggest Number from the Numeric Strings
// INPUT "5 3 2 1 4"
// OUTPUT "5 4 3 2 1" (Expected)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "7415883135";

    // sort(str.begin(), str.end(), greater<int>());
    sort(str.begin(), str.end(), greater<char>());

    //or we can also use greater<char>() instead of greater<int<()

    cout << str << endl;

    return 0;
}