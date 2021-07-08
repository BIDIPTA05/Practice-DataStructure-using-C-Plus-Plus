#include <iostream>
using namespace std;

int main()
{

    int n, reverse = 0;
    cout << "Enter N : ";
    cin >> n;

    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n /= 10;
    }
    cout << "Reverse is : " << reverse;

    return 0;
}