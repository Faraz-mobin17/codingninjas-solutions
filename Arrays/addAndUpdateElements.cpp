#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i += 1)
    {
        cin >> arr[i];
    }
    cout << "printing elemnts\n";
    for (int i = 0; i < 5; i += 1)
    {
        cout << arr[i] << " ";
    }
    cout << "updating elements\n";
    arr[0] = 10;

    cout << "deleting elements in array\n";
    for (int i = 1; i < 5; i += 1)
    {
        arr[i - 1] = arr[i];
    }

    cout << "printing elemnts\n";
    for (int i = 0; i < 5; i += 1)
    {
        cout << arr[i] << " ";
    }

    return 0;
}