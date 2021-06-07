#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }

    int ans = 2;
    int pd = (arr[1] - arr[0]);
    int curr = 2;

    for (int j = 2; j < n; j++)
    {

        if (pd == (arr[j] - arr[j - 1]))
        {
            curr++;
        }

        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
    }

    cout << ans;

    return 0;
}

// In Kick Start 2020 Round E (you do not need to know anything about the previous problem to solve this one) Sarasvati learned about arithmetic arrays. An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example,  [9,10][9,10] ,  [3,3,3][3,3,3] , and  [9,7,5,3][9,7,5,3]  are arithmetic arrays, while  [1,3,3,7][1,3,3,7] ,  [2,1,2][2,1,2] , and  [1,2,4][1,2,4]  are not.

// Sarasvati again has an array of  NN  non-negative integers. The  ii -th integer of the array is  AiAi . She can replace at most one element in the array with any (possibly negative) integer she wants. Longest progression kickstart solution 2021

// For an array  AA , Sarasvati defines a subarray as any contiguous part of  AA . Please help Sarasvati determine the length of the longest possible arithmetic subarray she can create by replacing at most one element in the original array.

// Input
// The first line of the input gives the number of test cases,  TT .  TT  test cases follow. Each test case begins with a line containing the integer  NN . The second line contains  NN  integers. The  ii -th integer is  AiAi .

// Output
// For each test case, output one line containing Case # xx :  yy , where  xx  is the test case number (starting from 1) and  yy  is the length of the longest arithmetic subarray.

// Limits
// Time limit: 30 seconds.
// Memory limit: 1 GB.
// 1≤T≤1001≤T≤100
// 0≤Ai≤1090≤Ai≤109 .

// Longest progression kickstart solution 2021
// Test Set 1
// 2≤N≤20002≤N≤2000 .

// Test Set 2
// 2≤N≤1052≤N≤105  for at most  1010  test cases.
// For the remaining cases,  2≤N≤20002≤N≤2000 .

// Sample
// Sample Input
// save_alt
// content_copy
// 3
// 4
// 9 7 5 3
// 9
// 5 5 4 5 5 5 4 5 6
// 4
// 8 5 2 0
// Sample Output
// save_alt
// content_copy
// Case #1: 4
// Case #2: 6
// Case #3: 4
// In Sample Case #1, the whole array is an arithmetic array, thus the longest arithmetic subarray is the whole array.

// In Sample Case #2, if Sarasvati changes the number at third position to  55 , the array will become  [5,5,5,5,5,5,4,5,6][5,5,5,5,5,5,4,5,6] . The subarray from first position to sixth position is the longest arithmetic subarray.

// In Sample Case #3, Sarasvati can change the number at the last position to  −1−1 , to get  [8,5,2,−1][8,5,2,−1] . This resulting array is arithmetic.
