#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;
    int res = 1;
    while (res <= n) {
        i++;
        res = i * i;
    }
    cout << i - 1;
    return 0;
}
