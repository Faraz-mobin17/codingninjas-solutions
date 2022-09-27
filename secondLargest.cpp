#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int arr[], int n) {
	int largest = INT_MIN;
	int secondLargest = INT_MIN;
	for (int i = 0; i < n; ++i) {
		if (arr[i] > largest) {
			secondLargest = largest;
			largest = arr[i];
		} else {
			if (arr[i] > secondLargest && arr[i] < largest) {
				secondLargest = arr[i];
			}
		}
	}
	return secondLargest;
}

int main() {
	int arr[] = {0};
	int n = sizeof(arr)/sizeof(arr[0]);
	int ans = findSecondLargest(arr,n);
	cout << ans;
	return 0;
}