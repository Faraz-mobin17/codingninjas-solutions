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

int main()
{
    int n;
    cin >> n;
    cout << countMinStepsToOne(n);
}