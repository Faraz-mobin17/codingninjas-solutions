#include <iostream>
using namespace std;

int countZeros(int n)
{
    if (n <= 9)
    {
        return n == 0 ? 1 : 0;
    }
    int lastDigit = n % 10;
    int count = 0;
    if (lastDigit == 0)
    {
        count = 1;
    }
    return count + countZeros(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
