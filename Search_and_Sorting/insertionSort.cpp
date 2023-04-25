#include <iostream>
using namespace std;
// https://www.geeksforgeeks.org/insertion-sort/?ref=lbp
/*
	it is easy to implement
	adaptive 
	best case is O(n) worst and average O(n^2)
	practically it is more efficient than bubble sort and selection sort
	insertion sort is a stable sorting technique it is also inplace sorting technique
	
*/
void insertionSort(int *input, int size)
{
    //Write your code here
  for (int i = 1; i < size; i++)
	{
		int current = input[i];
		int j;
		for ( j = i - 1; j >= 0; j--)
		{
			if (current < input[j])
				input[j + 1] = input[j];
			else
				break;

		}
		input[j + 1] = current;
	}
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}