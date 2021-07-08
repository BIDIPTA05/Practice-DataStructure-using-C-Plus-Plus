//Write a program to generate all possible subset of a set
// {a,b,c}

// object      abc  (2^n - 1)
// {}          000     0
// {c}         001     1
// {b}         010     2
// {b,c}       011     3
// {a}         100     4
// {a,c}       101     5
// {a,b}       110     6
// {a,b,c}     111     7

// we know we give subset of any n number is(2 ^ n - 1)
// Here
// Yaha par hum ye dekhenge ki jis corresponce bit pe set bit hai it means(1) hai to hum uske correpondence object ko print kr denge like

// a = first position
// b = second position
// c = third position
// and so on..
// jiske postion me 1 hoga usko print kr denge thats it

// 010 = {b}
// 011 = {b,c}

#include <bits/stdc++.h>
using namespace std;

void subset(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{

    int arr[3] = {1, 2, 3};
    subset(arr, 3);
    return 0;
}