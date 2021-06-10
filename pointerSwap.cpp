#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) // call by refrence if we sent value without using pointer than that is a call by value.
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int a, b;
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;

    swap(&a, &b);

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}