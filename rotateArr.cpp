#include <iostream>
using namespace std;


void rotate(int arr[], int d, int n)
{
    int i = 0;
	while ( i < d ) {
		int temp = arr[0];
		for (int i = 0; i < n - 1; i += 1) {
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
		i++; 
	}
}



int main()
{
	int arr[7] = {1,2,3,4,5,6,7};
	rotate(arr,2,7);

	for (int i = 0; i < 7; i += 1) 
		cout << arr[i];

	return 0;
}