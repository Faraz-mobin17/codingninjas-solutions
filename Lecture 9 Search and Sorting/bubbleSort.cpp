#include <iostream>
using namespace std;

void bubbleSort(int *input, int size)
{
    //Write your code here
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size;++j) {
            if (input[j] < input[i]) {
                int temp = input[j];
                input[j] = input[i];
                input[i] = temp;
            }
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

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}