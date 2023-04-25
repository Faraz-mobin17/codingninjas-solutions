#include <iostream>
using namespace std;
// brute force O(2^n)
int fibo(int n) {
	if (n <= 1) return 1;
	int a = fibo(n - 1);
	int b = fibo(n - 2);
	return a + b;
}
// memoization approach O(N)
int fibo_helper(int n, int* ans) {
	if (n <= 1) return n;
	// check if output already exists
	if (ans[n] != -1) {
		return ans[n];
	}
	// if ans is not present now calculate ansi
	int a = fibo_helper(n - 1, ans); // will give you ans of n - 1
	int b = fibo_helper(n - 2, ans); // will give you ans of n - 2
	// save the ans for future use 
	ans[n] = a + b;
	// return final output
	return ans[n];
}

int fibo_2(int n) {
	int * ans = new int[n + 1];
	for (int i = 0; i < n; i += 1) {
		ans[i] = -1; 
	}
	fibo_helper(n,ans);
}
// iterativly dynamic programming O(n)
int fibo_3(int n) {
	int* ans = new int[n + 1];
	ans[0] = 0;
	ans[1] = 1;
	for (int i = 2; i <= n; i += 1) {
		ans[i] = ans[i - 1] + ans[i - 2];
	}
	return ans[n];
}
int main() {
	return 0;
}
