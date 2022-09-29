// Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
#include<iostream>
using namespace std;


bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */

    
    int currentNumber = 0;
    int nextNumber = 1;
    int fiboNum;
    if (n== currentNumber || n == nextNumber) return true;
    for (int i = 0; i <= n; ++i) {
          if (fiboNum == n) {
            return true;
        }
        fiboNum = currentNumber + nextNumber;
        currentNumber = nextNumber;
        nextNumber = fiboNum;
        
      
    }
    return false;
}

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}


