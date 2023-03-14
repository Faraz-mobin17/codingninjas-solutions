#include <iostream>
using namespace std;

int factorial(int n) {
	cout << "I am calculating F(" << n << ") \n";
	if (n == 0) return 1;
	int fact =  n * factorial(n - 1);
	cout << "Done ! F(" << n << ") = " << fact << "\n";
	return fact;
}
int main() {
	int ans = factorial(4);
	cout << ans << endl;
	return 0;
}