#include <iostream>
using namespace std;

void pushZeroesEnd(int arr[], int n) {
	int i = 0, k = 0;
	while (i < n) {
		if (arr[i] != 0) {
			int temp = arr[k];
			arr[k] = arr[i];
			arr[i] = temp;
			k++;
		}
		i++;
	}
}

int main() {
	int arr[7] = {2,0,0,1,3,0,0};
	pushZeroesEnd(arr,7);
	for (int i = 0; i < 7; i += 1) {
		cout << arr[i] << " ";
	}
	return 0;
}