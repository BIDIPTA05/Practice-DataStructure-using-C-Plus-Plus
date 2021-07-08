#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v; // vector initilization

    // Insert Value in Vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // method 1 for print
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl; // 1 2 3
    }

    // method 2 for print
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl; // 1 2 3
    }

    // method 3 for print
    for (auto element : v)
    {
        cout << element << endl; // 1 2 3
    }

    v.pop_back(); // Remove Vector Last Element

    vector<int> v2(3, 50); //50 50 50 (size, sameElement)

    swap(v, v2); //swapping vectors

    sort(v.begin(), v.end()); // Sort Vector

    return 0;
}