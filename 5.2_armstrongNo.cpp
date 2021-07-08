#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter N : ";
    cin >> n;
    int orignalNo = n, sum = 0;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n /= 10;
    }
    if (sum == orignalNo)
    {
        cout << "ArmStrong";
    }
    else
    {
        cout << "Not ArmStrong";
    }

    return 0;
}
