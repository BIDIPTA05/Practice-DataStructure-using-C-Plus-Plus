#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Max = INT_MIN; //Min value store in Max
    int n;
    cout << " Enter array size : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        Max = max(Max, arr[i]);
        cout << Max << " ";
    }

    return 0;
}
