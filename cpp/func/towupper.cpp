#include <iostream>
#include <cwctype>
using namespace std;

int main(int argc, char const *argv[])
{
    wchar_t s[] = L"hello world!";
    wcout << L"The uppercase string is: ";
    cout << endl;
    for (int i = 0; i < wcslen(s); i += 1)
    {
        putwchar(towupper(s[i]));
    }
    return 0;
}