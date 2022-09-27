#include <iostream>
using namespace std;

int arrayRotateCheck(int arr[], int n) {
	int minEl = arr[0];
	int minIdx = 0;
	for (int i = 0; i < n; i += 1) {
		if (arr[i] < minEl) {
			minEl = arr[i];
			minIdx = i;
		} 
	}
	return minIdx;
}

int main() {
	int arr[] = {10,20,30,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int ans = arrayRotateCheck(arr,n);
	cout << ans;
	return 0;
}