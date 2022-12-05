#include <iostream>
using namespace std;

void merge(int *input, int startIndex, int endIndex)
{
	// merge array
	int size = endIndex - startIndex + 1;  // no of el in arr
	int mid = (startIndex + endIndex) / 2; // mid of arr
	int *output = new int[size];		   // creating dynamic arr of no of el in arr

	int i = startIndex;
	int j = mid + 1;
	int k = 0; // output arr index

	while (i <= mid && j <= endIndex)
	{
		if (input[i] < input[j])
		{
			output[k++] = input[i++];
		}
		else
		{
			output[k++] = input[j++];
		}
	}
	// if el left in i
	while (i <= mid)
	{
		output[k++] = input[i++];
	}
	// if el left in j
	while (j <= endIndex)
	{
		output[k++] = input[j++];
	}
	// copy to original arr
	int m = 0;
	for (int i = startIndex; i <= endIndex; i++)
	{
		input[i] = output[m];
		m++;
	}
	// freeing the dynamic memory created
	delete[] output;
}

void mergeSortRec(int input[], int startIndex, int endIndex)
{
	// check the base case
	if (startIndex >= endIndex)
		return;
	// calculate the mid
	int mid = (startIndex + endIndex) / 2;
	// call merge sort on start to mid
	mergeSortRec(input, startIndex, mid);
	// call the merge sort on the mid + 1 to end
	mergeSortRec(input, mid + 1, endIndex);
	// now the array is sorted merge them
	merge(input, startIndex, endIndex);
}

void mergeSort(int input[], int size)
{
	int startIndex = 0;
	int endIndex = size - 1;
	// helper function
	mergeSortRec(input, startIndex, endIndex);
}

int main()
{
	int length;
	cin >> length;
	int *input = new int[length];
	for (int i = 0; i < length; i += 1)
		cin >> input[i];
	mergeSort(input, length);
	for (int i = 0; i < length; i += 1)
		cout << input[i] << " ";
	return 0;
}
