#include <iostream>
using namespace std;

int tripletSum(int *input, int size, int x)
{
	//Write your code here
    int count = 0;
    for (int i = 0; i < size; i += 1) {
        for (int j = i + 1; j < size; j += 1) {
            for (int k = j + 1; k < size; k += 1) {
                if (input[i] + input[j] + input[k] == x) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}