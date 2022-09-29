// C++ program to print all primes less than N
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    int count = 0;
    while (count < n) {
        int term = (3 * i) + 2;
        if (term % 4 != 0) {
            cout << term << " ";
            count++;
        }
        i++;
    }
    return 0;
}
