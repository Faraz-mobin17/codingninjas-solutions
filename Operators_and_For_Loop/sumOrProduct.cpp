// C++ program to print all primes less than N
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int c;
    cin >> n >> c;
            int sum = 0;
            int product = 1;
    switch (c) {
        case 1: 
            for (int i = 0; i <= n; i += 1) {
                sum += i;
            }
            cout << sum;
            break;
        case 2:
            for (int i = 1; i <= n; i += 1) {
                product *= i;
            }
            cout << product;
            break;
        default:
            cout << -1;
    }


}
