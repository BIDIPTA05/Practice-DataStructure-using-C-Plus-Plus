#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    // int temp;
    int transpose[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            // temp = arr[i][j];
            // arr[i][j] = arr[j][i];
            // arr[j][i] = temp;
            transpose[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << transpose[i][j] << " ";
            // cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}