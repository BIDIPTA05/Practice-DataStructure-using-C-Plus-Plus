#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int minNo = INT_MAX;
    int maxNo = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        minNo = min(minNo, arr[i]);
        maxNo = max(maxNo, arr[i]);
    }
    cout << minNo << " " << maxNo;

    return 0;
}