#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
 	int count = 0;
    for (int i = 0; i < size; i += 1) {
        if (input[i] == 0) 
            count++;
    }
    for (int i = 0;i < count; i += 1) {
        input[i] = 0;
    }
    for (int i = count; i < size; i += 1) {
        input[i] = 1;
    }
}
// sort 0 1 2 
void sort012(int* arr, int n) {
	int start = 0;
	int end = n - 1;
	int i = 0;
	while (i <= end) {
		if (arr[i] == 0) {
			swap(start,i,arr);
			start++;
			i++;
		} 
		else if (arr[i] == 1) {
			i++;
		}
		else {
			// if found 2
			swap(i,end,arr);
			end--;
		}
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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}