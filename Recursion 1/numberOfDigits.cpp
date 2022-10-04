#include <iostream>
using namespace std;
int count(int n) {
    // int count;
    // for (count = 0; n != 0; ++count) {
    //     n = n / 10;
    // }
    // return count;
//  while (n != 0) {
//     ++count;
//     n /= 10;
//  }
//  return count;
   
    if (n/10 == 0)
        return 1;
    return 1 + count(n / 10);
}
int main(int argc, char const *argv[])
{
     int n;
    cin >> n;
  
    cout << count(n) << endl;
    return 0;
}