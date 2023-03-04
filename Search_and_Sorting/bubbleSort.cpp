#include <bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/bubble-sort/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n) // Time Complexity: O(n), Space complexity: O(1)
{
	bool flag;
    for (int i = 0; i < n - 1; i++)
	{
		flag = false;
        for (int j = 0; j < n - i - 1; j++)
		{

            if (arr[j] > arr[j + 1])
			{
                swap(arr[j], arr[j + 1]);
				flag = true;
			}
		}
		if (flag == false) break;
	}

}
void printArray(int arr[], int size)
{
    
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\n"; 
}
int main()
{

	// int arr[] = { 5, 1, 4, 2, 8};
	int n;
	cout << "Enter size: " << endl;
	cin >> n;
	int* arr = new int[n];
	cout << "Enter elements in array: " << endl;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
	delete[] arr;
	cout << endl;
    return 0;
}