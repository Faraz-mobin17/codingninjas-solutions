#include <iostream>
using namespace std;

void print(int n) 
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    print(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    print(n);
    return 0;
}