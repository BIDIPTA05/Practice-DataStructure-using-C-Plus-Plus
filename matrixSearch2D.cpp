//Problem =  key search in row and column sorted matrix
//Soultion = linear search (Time complexity O(nm)) ittrate all matrix element and compare with key (Not optimise)
//Optimise Solution below (we can do better)
// 4 4 55(key)
// 1 2 3 11
// 4 5 6 12
// 7 8 9 13
// 10 11 12 14
// Doesn't Exist

//start from top right element only for this logic

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m; //input matrix order
    int mat[n][m]; //matrix one
    int key;
    cin >> key;

    //input matrix one
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int row = 0;
    int col = m - 1;
    bool flag = false;

    while (row < n && col >= 0)
    {
        if (mat[row][col] == key)
        {
            flag = true;
        }
        if (mat[row][col] > key)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    if (flag)
    {
        cout << "Element Found ";
    }
    else
    {
        cout << "Doesn't Exist ";
    }

    return 0;
}