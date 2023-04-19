#include <iostream>
using namespace std;
void towerOfHanoi(int n, char source, char helper, char destination)
{
    // Write your code here
    if (n == 0)
        return;
    // recursive call
    towerOfHanoi(n - 1, source, destination, helper); // soruce se helper pe dalega uisng destinatino
    // cout << source << " " << destination << endl;
    cout << "Move disk " << n << " from rod " << source
         << " to rod " << destination << endl;
    towerOfHanoi(n - 1, helper, source, destination); // helper pe destinatino using source
}
int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}
