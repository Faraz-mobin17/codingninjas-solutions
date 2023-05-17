#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i += 1)
    {
        cin >> arr[i];
    }
    cout << "printing elemetns\n";
    for (int i = 0; i < 5; i += 1)
    {
        cout << arr[i];
    }
    return 0;
}