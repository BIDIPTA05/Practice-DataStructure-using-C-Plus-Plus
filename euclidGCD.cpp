//Find GCD using Euclids Method
// yaha pr hum jin do number ka gcd niklne wale hai usko basically hum chota kr lenge jisse humko gcd niklna esy ho jayega
//like

// 24 = 2 * 2 * 2 * 3
// 42 = 2 * 3 *7
// GCD(42,24) = 6

// 42 - 24 = 18
// 24 - 18 = 6
// 18 - 6 = 12
// 12 - 6 =  6
// 6 - 6 = 0

// second approch
// 42 % 24 = 18;
// 24 & 18 = 6;
// 18 & 6 = 0;
//aisa tb tk krenge jab tk 0 na aa jaye

// NOTE : GCD niklne k or bhi methods hai but ye time complexity k liye better hai or bht optimize hai

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{

    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}