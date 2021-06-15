#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    // n = 0101;
    // suppose we need to clear bit at postion, i = 2;
    // 1 << i = 0100;
    // 0101 & 0100 = 0100;
    return ((n & (1 << pos)) != 0); //if bit is 0 then return 0 otherwise return 1
}

int setBit(int n, int pos) //set means 1 ; unset mean 0
{
    // n = 0101;
    // suppose we need to set bit at postion, i = 1;
    // 1 << i = 0010;
    // 0101 | 0010 = 0111;
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    // n = 0101;
    // suppose we need to clear bit at postion, i = 2;
    // 1 << i = 0100;
    // ~0100 = 1011;
    // 0101 & 1011 = 0001;
    int mask = ~(1 << pos);
    return (n & mask);
}

int updateBit(int n, int pos, int value)
{

    // n = 0101;
    // suppose we need to clear bit at postion, i=1 to 1;
    // 1 << i = 0010;
    // ~0100 = 1101;
    // 0101 & 1101 = 0101;
    // 1<<i = 0010;
    // 0101 | 0010 = 0111;
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (1 << value));
}

int main()
{
    cout << getBit(5, 2) << endl;
    cout << setBit(5, 1) << endl;
    cout << clearBit(5, 2) << endl;
    cout << updateBit(5, 1, 1) << endl;

    return 0;
}