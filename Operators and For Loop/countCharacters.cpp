// C++ program to print all primes less than N
#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    c = cin.get();
    int spaceCount = 0;
    int charCount = 0;
    int numCount = 0;
    while (c != '$') {
        if (c == ' ' || c == '\t' || c == '\n') {
            spaceCount++;
        } else if (c >= 'a' && c <= 'z') {
            charCount++;
        } else if (c >= '0' && c <= '9') {
            numCount++;
        } else {
            break;
        }
        c = cin.get();
    }
    cout << charCount << " " << numCount << " " << spaceCount;
    return 0;

}
