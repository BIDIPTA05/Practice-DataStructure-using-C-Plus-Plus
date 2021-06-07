// Record Breaking Problem Google KickStart

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    arr[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0;
    int Max = -1;

    for (int i = 0; i < 0; i++)
    {
        if (arr[i] > Max && arr[i] > arr[i + 1])
        {
            ans++;
        }
        Max = max(Max, arr[i]);
    }
    cout << ans;
    return 0;
}