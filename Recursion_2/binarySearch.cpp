#include <iostream>
using namespace std;

// input - input array
// size - length of input array
// element - value to be searched
int binarySearchHelper(int input[],int start, int end, int element) {
    if (start <= end) {
        int mid = start + (end - start) / 2;
        if (input[mid] == element) { 
            return mid;
        }
        if (input[mid] > element) {
            return binarySearchHelper(input,start, mid - 1, element);
        }
         return binarySearchHelper(input,mid + 1,end,element);
    }
    return -1;
}
int binarySearch(int input[], int size, int element) {
    // Write your code here
    int start = 0;
    int end = size - 1;
    return binarySearchHelper(input,start,end,element);
}


int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
