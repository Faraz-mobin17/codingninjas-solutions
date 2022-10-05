#include <iostream>
using namespace std;
int multi(int n ) {
    if (n % 10 == n) return n;
    return (n%10) * multi(n / 10);
}
int main(int argc, char const *argv[])
{
    int n; 
    cin >> n;
    cout << multi(n);
    return 0;
}