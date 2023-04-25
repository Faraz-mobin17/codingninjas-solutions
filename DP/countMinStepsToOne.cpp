#include <bits/stdc++.h>
using namespace std;
#include <climits>
int countMinStepsToOne(int n)
{
    // Write your code here
    if (n <= 1)
    {
        return 0;
    }
    int x = INT_MAX;
    int y = INT_MAX;
    int z = INT_MAX;

    if (n % 2 == 0)
    {
        y = countMinStepsToOne(n / 2);
    }
    if (n % 3 == 0)
    {
        z = countMinStepsToOne(n / 3);
    }
    else
    {
        x = countMinStepsToOne(n - 1);
    }
    return 1 + min(x, min(y, z));
}
int helper(int *ans, int n)
{
    if (n <= 1)
        return 0;
    if (ans[n] != -1)
    {
        return ans[n]; // if ans is already there return the ans[n]
    }
    // calculate the ans
    int a = helper(ans, n - 1); // recursive call made
    int b = INT_MAX, c = INT_MAX;
    if (n % 2 == 0)
    {
        b = helper(ans, n / 2);
    }
    if (n % 3 == 0)
    {
        c = helper(ans, n / 3);
    }
    int output = 1 + min(a, min(b, c));
    ans[n] = output;
    return output;
}
int countMinStepsOne3(int n)
{

    // Write your code here
    int *minSteps = new int[n + 1];
    minSteps[1] = 0;
    for (int i = 2; i <= n; ++i)
    {
        int subtractOne = minSteps[i - 1];
        int divideByTwo = INT_MAX;
        int divideByThree = INT_MAX;

        if (i % 2 == 0)
        {
            divideByTwo = minSteps[i / 2];
        }
        if (i % 3 == 0)
        {
            divideByThree = minSteps[i / 3];
        }

        minSteps[i] = 1 + min(subtractOne, min(divideByTwo, divideByThree));
    }
    int result = minSteps[n];
    delete[] minSteps;
    return result;
}
int countMinStepsToOne2(int n)
{
    int *ans = new int[n + 1];
    // init the array with -1
    for (int i = 0; i <= n; i += 1)
    {
        ans[i] = -1;
    }
    return helper(ans, n);
}
int main()
{
    int n;
    cin >> n;
    cout << countMinStepsToOne(n);
    return 0;
}