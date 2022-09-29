// C++ program to print all primes less than N
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
    	int prime = 1;
    	int inum = sqrt(i);
        for (int count = 2; count <= inum; count += 1) {
            if (i % count == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) cout << i << endl;
    }
}