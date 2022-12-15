#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>

using namespace std;
int hrs = 0;
int mins = 0;
int sec = 0;

void showClock()
{
    system("cls");
    cout << setfill(' ') << setw(55) << " TIMER \n";
    cout << setfill(' ') << setw(66) << "=============================\n";
    cout << setfill(' ') << setw(29);
    cout << "| " << setfill('0') << setw(2) << hrs << " Hours | ";
    cout << setfill('0') << setw(2) << mins << " Minutes | ";
    cout << setfill('0') << setw(2) << sec << " Seconds |" << endl;
    cout << setfill(' ') << setw(66) << "=============================\n";
}

void systemCallTimer()
{
    while (true)
    {
        showClock();
        sleep(1);
        sec++;
        if (sec == 60)
        {
            mins++;
            if (mins == 60)
            {
                hrs++;
                mins = 0;
            }
            sec = 0;
        }
    }
}

int main(int argc, char const *argv[])
{
    systemCallTimer();
    return 0;
}