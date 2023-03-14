#include <iostream>
using namespace std;

int fibo2(int n) {
	if (n < 2) return n;
	int f1,f2,f;
	f1 = 0;
	f2 = 1;
	for (int i = 2; i <= n; i += 1) {
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}

int fibo(int n) {
	if ( n < 2 ) return n;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int n;
	cout << "give me an N: " << endl;
	cin >> n;
	int ans = fibo(n);
	cout << "Answer: " << ans;
	return 0;
}