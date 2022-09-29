#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x,n;
    cin >> x >> n;
    int pow = 1;
    for (int i = 1; i <= n; i += 1) {
        pow *= x;
    }
    cout << pow;
 
}
