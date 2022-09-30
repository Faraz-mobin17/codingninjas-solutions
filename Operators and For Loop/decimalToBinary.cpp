#include<iostream>
using namespace std;

int pow(int n, int x) {
    int ans = 1;
    for (int i = 1; i <= n; i += 1) {
        ans *= x;
    }
    return ans;
}


int main() {
	// Write your code here
	long n, binary = 0, remainder, product = 1;
  cin >> n;
  while (n != 0) {
    remainder = n % 2;
    binary = binary + (remainder * product);
    n = n / 2;
    product *= 10;
  }
  cout  << binary ;
    
}
