#include <iostream>

using namespace std;

long long int memo[101000];
long long int n;
long long int fib(long long int n)
{
    if (n == 1 || n == 2)
        return 1;
    if (memo[n] != 0)
        return memo[n];
    return memo[n] = fib(n - 1) + fib(n - 2);
}
int main()
{
    cin >> n;
    long long int ans = fib(n);
    cout << ans;
}