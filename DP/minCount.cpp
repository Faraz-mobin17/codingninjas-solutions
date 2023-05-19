#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int n)
{
    // find the floating-point value of the square root of `n`
    long double sqr = sqrt(n);
    // return true if the square root is an integer
    return sqr == floor(sqr);
}

int minCount(int n)
{
    if (isPerfectSquare(n))
    {
        return 1;
    }
    if (n <= 3)
    {
        return n;
    }
    // initialize the result with the maximum number of squares possible
    int result = n;
    // loop through all positive integers less than the square root of `n`
    for (int i = 1; i * i < n; i += 1)
    {
        // recur for `n-i×i` and update the result if a lesser value is found
        result = min(result, 1 + minCount(n - i * i));
    }
    return result;
}
// solution using memoization
int solve(int *dp, int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    // calculate
    int ans = n;
    for (int i = 2; i * i <= n; i += 1)
    {
        ans = min(ans, 1 + solve(dp, n - i * i));
    }
    dp[n] = ans;
    return dp[n];
}
int minCount2(int n)
{
    int *dp = new int[n + 1];
    for (int i = 0; i < n; i += 1)
    {
        dp[i] = -1;
    }
    return solve(dp, n);
}
int main()
{
    int n;
    cin >> n;
    cout << minCount(n);
}