#include <iostream>
using namespace std;

void merge(int *input, int startIndex, int endIndex)
{
	// merge array
	int mid = (startIndex + endIndex) / 2;
	int len1 = mid - startIndex + 1;
	int len2 = endIndex - mid;

	int *first = new int[len1];
	int *second = new int[len2];

	// copy values
	int mainArrayIndex = startIndex;

	for (int i = 0; i < len1; i++)
	{
		first[i] = input[mainArrayIndex++];
	}
	mainArrayIndex = mid + 1;
	for (int i = 0; i < len2; i++)
	{
		second[i] = input[mainArrayIndex++];
	}
	int index1 = 0;
	int index2 = 0;
	mainArrayIndex = startIndex;
	while (index1 < len1 && index2 < len2)
	{
		if (first[index1] < second[index2])
		{
			input[mainArrayIndex++] = first[index1++];
		}
		else
		{
			input[mainArrayIndex++] = second[index2++];
		}
	}
	while (index1 < len1)
	{
		input[mainArrayIndex++] = first[index1++];
	}
	while (index2 < len2)
	{
		input[mainArrayIndex++] = second[index2++];
	}
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
		cout << input[i];
	return 0;
}
