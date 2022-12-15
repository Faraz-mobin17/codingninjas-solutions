#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "the local date and time is: " << dt << endl;
    return 0;
}