#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int transpose[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    //****************** Logic 1 for Transpose ************************
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    //******************* Logic 2 for Transpose ***********************
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j < m; j++)
    //     {
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
    //     }
    // }

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << transpose[i][j] << " "; //print for logic 1
            // cout << arr[i][j] << " ";       //print for logic 2
        }
        cout << endl;
    }

    return 0;
}