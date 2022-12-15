#include <iostream>
#include <cwctype>
using namespace std;

int main(int argc, char const *argv[])
{
    wchar_t c = 'S';
    if (iswlower(c))
    {
        wcout << c << "-> is a Lower case character\n";
    }
    else
    {
        wcout << c << "-> Character is Uppercase\n";
    }
    return 0;
}