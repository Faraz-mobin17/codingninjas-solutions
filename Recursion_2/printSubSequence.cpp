#include <iostream>
#include <string>
using namespace std;

void print_subs(string input, string output) {
    if (input.empty()) {
        cout << output << endl;
        return;
    }
    print_subs(input.substr(1),output);
    print_subs(input.substr(1),output + input[0]);
}

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;
    string output = "";
    print_subs(input,output);
    return 0;
}