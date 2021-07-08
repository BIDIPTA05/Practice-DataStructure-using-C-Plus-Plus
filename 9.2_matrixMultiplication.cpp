#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3; //input matrix order
    int m1[n1][n2];        //matrix one
    int m2[n2][n3];        //matrix two
    int Multi[n1][n3];     //answer matrix

    //input matrix one
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }

    //input matrix twq
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];
        }
    }

    //set answer matrix = 0
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            Multi[i][j] = 0;
        }
    }

    //matrix multiplication logic
    for (int i = 0; i < n1; i++) //for first matrix row
    {
        for (int j = 0; j < n3; j++) //for second matrix column
        {
            for (int k = 0; k < n2; k++) //for ittrate row and column of matrix one and twq
            {
                Multi[i][j] += m1[i][k] * m2[k][j]; //multiply and sum
            }
        }
    }

    //print answer matrix
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << Multi[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}