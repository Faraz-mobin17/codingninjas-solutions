#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k)
{
    // Write your code here
    if (k == 0)
        return 1;

    double ans = 1 / pow(2, k) + geometricSum(k - 1);
    return ans;
}
int main(int argc, char const *argv[])
{
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;
    return 0;
}
