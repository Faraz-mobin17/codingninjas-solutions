#include<iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {
  if (size < 1) return -1; // base case 
  int ans = lastIndex(input + 1,size - 1,x); // found index
  if (ans == -1) 
  {
    if (input[0] == x) 
    {
        return 0;
    } 
    return ans;
  } 
  return (1 + ans);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}


