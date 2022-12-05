#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 2;
    int times = 3;
    int power = 1;
    for (int i = 1; i <= times; i += 1)
    {
        power *= n;
    }
    cout << power;
    return 0;
}