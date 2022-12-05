#include <iostream>
using namespace std;
int count_zeros(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i += 1)
        fact *= i;
    int count = 0;
    while (fact % 10 == 0)
    {
        ++count;
        fact /= 10;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int ans = count_zeros(n);
    cout << ans;
    return 0;
}