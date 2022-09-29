#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin >> n;
	int evenSum = 0;
    int oddSum = 0;
    int temp = n;
    while (temp != 0) {
        
        int digit = temp % 10;
        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        temp /= 10;
    }
    cout << evenSum << " " << oddSum << endl;
}
