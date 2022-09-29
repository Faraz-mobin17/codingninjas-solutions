#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin >> n;
    
    int tmp = n;
    int reverseNumber = 0;
    while (tmp != 0) {
        int lastDigit = tmp % 10;
        reverseNumber = reverseNumber * 10 + lastDigit;
        tmp /= 10;    
    }
    cout << reverseNumber;
}
