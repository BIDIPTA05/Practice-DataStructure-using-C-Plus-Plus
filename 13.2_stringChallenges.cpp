// String Upper Case to Lower Case and Vice Versa

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "ProgrammerShri";
    //cout << 'a' - 'A' << endl; //Output : Differnce 32 from ASCII Value

    // small 'a' is 32 more if compare to capital 'A'
    // than if we want to change uppercase to lower case
    // we can use differnce 32 add or subtract in ascii value
    // LET SEE

    //convert into uppercase

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        // cout << str << endl; //Want to see Steps ?
    }
    cout << str << endl;

    // convert into lowercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        // cout << str << endl; //Want to see Steps ?
    }
    cout << str << endl;

    //convert using "INBUILD C++ Function"
    //To UPPERCASE
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    //To lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;

    return 0;
}
