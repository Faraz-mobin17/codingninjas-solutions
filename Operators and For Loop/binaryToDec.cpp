#include<iostream>
#include <cmath>
using namespace std;

int main() {
	// Write your code here
    int n;
    cin >> n;
	int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  cout << dec;
}
