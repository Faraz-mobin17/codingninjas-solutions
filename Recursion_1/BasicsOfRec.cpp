#include <iostream>
#include <string>
using namespace std;
// VERY IMPORTANT BASE CASE
// TRUST THE FUNCTION
void say_hello(int n)
{
	if (n == 0)
		return;
	say_hello(n - 1); // first n - 1 lines
	cout << "hello " << n << endl;
}
// TRUST THE FUNCTION
// return 1 + 2 + 3 + ... + (n - 1) + n
int sum_n(int n)
{
	if (n == 0)
		return 0;
	int left_part = sum_n(n - 1);
	return left_part + n;
}

// sum digits
// 1234
// return 1 + 2 + 3 + 4
// what we want is sum_digits(123) + 4
// sum of digits(except lastDigit) + lastDigit
// 1234 -> 123 4
// 123 -> 12 3
// 12 -> 1 2
// 1 -> 0 1
int sum_digits(int n)
{
	if (n == 0)
		return 0;
	int last_digit = n % 10;
	int remaininig_part = n / 10;
	return sum_digits(remaininig_part) + last_digit;
	//	return sum_digits(123) + 4;
}

void pattern_print(int n)
{
	if (n == 0)
		return;
	pattern_print(n - 1); // because of trust
	for (int i = 1; i <= n; i += 1)
		cout << i << " ";
	cout << endl;
}

void pattern_print2(int n)
{
	if (n == 0)
		return;
	for (int i = 1; i <= n; i += 1)
		cout << i << " ";
	cout << endl;
	pattern_print2(n - 1); // because of trust
}
// TRUST-> mathematical induction
// STEP 1. initial condition
// STEP 2. assume till one point every thing is proven
// STEP 3. induction step
void pattern_print3(int n)
{
	if (n == 1)
	{
		cout << 1 << "\n";
		return;
	}
	for (int i = 1; i <= n; i += 1)
		cout << i << " ";
	cout << endl;
	pattern_print3(n - 1); // both pattern
	for (int i = 1; i <= n; i += 1)
		cout << i << " ";
	cout << endl;
}

// 1 2 3 4 5 6 7 8  9 ...
// 0 0 1 2 3 5 8 13 21...

// f8 = f7 + f6
// f5 = f4 + f3
// f(n) = f(n - 1) + f(n - 2) -> recurrence relations

// TRUST
int fibo(int n)
{
	if (n < 2)
		return n;
	return fibo(n - 1) + fibo(n - 2);
}
bool isPalindromeRec(string str, int start, int end)
{
	if (start == end)
		return true; // if only one char is present
	if (str[start] != str[end])
		return false;
	if (start < end + 1) // if more than 2 char
		return isPalindromeRec(str, start + 1, end - 1);
	return true; // if 2 char that are same
}
// aaa
// str[0] == str[str.length - 1]
bool isPalindrome(string str)
{
	int n = str.length();
	if (n == 0)
		return true; // if empty string is there
	return isPalindromeRec(str, 0, n - 1);
}

int main()
{
	//	say_hello(10);
	//	int ans = sum_digits(1234);
	//	cout << "Sum is: " << ans;
	//	pattern_print3(5);
	string str;
	cout << "Enter a string: ";
	cin >> str;
	if (isPalindrome(str))
		cout << "YES";
	else
		cout << "NNO";
	return 0;
}