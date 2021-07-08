// Problem :
// Give an array[n] of size n. Output sum of each subarray of the givin array;

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << " Enter array size : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum;
        }
        cout << endl;
    }

    return 0;
}
