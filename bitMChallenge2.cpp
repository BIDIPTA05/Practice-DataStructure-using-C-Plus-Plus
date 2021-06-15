//Write a program to count the number of once in binary representation of a number
// Let if
// n = 19 = (01011)2
// n - 1 = 18 = (01010)2
// n = n &n - 1
// = 01011 & 01010
// = 01010 = (18)10

//     n = 18 m - 1 = 17
//     n = 17 n - 1 = 16
//     n = 16 gives 0 because n is a power of 2(we already discuss in previous quesion bitMChallenge)

#include <bits/stdc++.h>
using namespace std;

int numberOfOnce(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << numberOfOnce(19);
    return 0;
}
