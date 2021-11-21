#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 5, 5, 9, 9};
    int n = nums.size();
    int ans;
    if (n == 0)
        return nums[0];
    for (int i = 0; i < n - 1; i = i + 2)
    {
        if (nums[i] != nums[i + 1])
        {
            ans = nums[i];
        }
    }

    return 0;
}