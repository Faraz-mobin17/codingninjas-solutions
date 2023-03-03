#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 1) 
    {
        cout << n << "\n";
        return;
    }
    print(n - 1);
    cout << n << "\n";
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    print(n);
    return 0;
}