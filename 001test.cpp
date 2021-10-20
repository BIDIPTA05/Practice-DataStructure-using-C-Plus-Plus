#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector> pascals_triangle;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> inner_sets;
        for (int j = 0; j <= i; j++)
        {

            if ((j == 0) || (j == i))
            {
                inner_sets.push_back(1);
            }
            else
            {
                inner_sets.push_back(pascals_triangle[i - 1][j - 1] + pascals_triangle[i - 1][j]);
            }
        }
        pascals_triangle.push_back(inner_sets);
    }
    return pascals_triangle;
}

int main()
{
    generate(5);

    return 0;
}