#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int minIdx = 0;
    int minEl = input[0];
    for (int i = 0; i < size; i += 1) {
    	if (input[i] < minEl) {
            minEl = input[i];
            minIdx = i;
        }
    }
    return minIdx;
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

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}