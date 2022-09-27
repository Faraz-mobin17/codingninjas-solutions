#include<iostream>
#include<cmath>
using namespace std;

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        if (i * i > n) {
            break;
        }
        i++;
    }
    cout << i;
    return 0;
}