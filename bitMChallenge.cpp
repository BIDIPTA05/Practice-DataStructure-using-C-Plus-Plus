//Write a program to check if a given number is power of 2
// Approach 1 Solution
// You can repetedly divde by 2 until get 1
// if you get one at last it means given number is power of 2

//Approach 2 solution using bit manipulation

// n = 6 = (0110)2
// n - 1 = 5 = (0101)2

// n = 8 = (1000)2
// n - 1 = 7 (0111)2

// (n & n-1) has same bits as n except the rightmost set bit
// 0110 & 0101 = 0100
// 1000 & 0111 = 0000

// n has only one set bit, and n-1 will have all
// set bits after that position
// Ex = 8

// [In Short:If we can take any number and that number n is power of 2 then their(n & n - 1) is surely gives 0's otherwise n is not a power of 2]

// NOTE :
// 1 == true
// 0 == false
// don't confuse

#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n)
{
    return (n && !(n & n - 1)); // if n is 0 then n - 1 is not possible so our function return false
}

int main()
{
    cout << isPowerOf2(8) << endl;
    return 0;
}