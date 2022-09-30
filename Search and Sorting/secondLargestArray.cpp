#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    
  int smallest = -2147483648;
  int largest = smallest;
  int secondLargest = smallest;
    if (n <= 1) return smallest;
    int i = 0;
	while (i < n) {
        if (input[i] > largest) {
            secondLargest = largest;
            largest = input[i];
        } else {
            if (input[i] > secondLargest && input[i] < largest) {
                secondLargest = input[i];
            }
        }
        ++i;
    }
    return secondLargest;
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

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}