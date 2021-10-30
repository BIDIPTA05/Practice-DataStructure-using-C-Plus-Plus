#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v.push_back(arr[i][j]);
        }
    }
    int k;
    cin >> k;

    sort(v.begin(), v.end());
    cout << endl;

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {

        if (i == k - 1)
        {
            cout << v[i];
        }
    }

    return 0;
}