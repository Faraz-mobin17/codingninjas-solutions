#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int count = 0;
    for (int i = start + pivot; i <= end; ++i) {
        if (arr[i] <= pivot) {
            ++count;
        }
    }
    // place at right index
    int pivotIndex = start + count;
    swap(arr[pivotIndex],arr[start]);
    // left and right wala part
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] < pivot) {
            ++i;
        }
        while (arr[j] > pivot) {
            --j;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    if (s >= e) return;
    
    // partition
    int p = partition(arr,s,e);
    // left part 
    quickSort(arr,s,p-1);
    // right sort
    quickSort(arr,p+1,e);
}

int main(int argc, char const *argv[])
{
    int arr[5] = {2,4,1,6,9};
    int n = 5;
    quickSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}