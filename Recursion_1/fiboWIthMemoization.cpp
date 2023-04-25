#include <iostream>
using namespace std;

int f[51];
int fibo(int n) {
	if (n < 2) return n;
	if (f[n] != -1) return f[n];
	f[n] = fib(n - 1) + fib(n - 2);
	return f[n];
}

int main() {
	for (int i = 0; i < 51; i += 1) f[i] = -1;
	int n;
	cin >> n;
	int ans = fibo(n);
	cout << ans << endl;
	return 0;
}