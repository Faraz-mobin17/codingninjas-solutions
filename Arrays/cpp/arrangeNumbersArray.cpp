#include <iostream>
using namespace std;

#include "solution.h"
void arrange(int *arr, int n)
{
    //Write your code here
    // if n is odd n / 2 loop
    // if n is even n - 1 loop
 	int start = 0;
    int end = n - 1;
    int value = 1;
    
    while (start < end) {
        arr[start] = value;
        value++;
        arr[end] = value;
        value++;
        start++;
        end--;
    }
    if (start == end) arr[start] = value;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}