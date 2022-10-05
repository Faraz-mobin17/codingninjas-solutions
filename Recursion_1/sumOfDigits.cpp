#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n/10);
}

int main(int argc, char const *argv[])
{
       int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
    return 0;
}