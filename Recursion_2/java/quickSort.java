package Recursion_2.java;
import java.io.*;
public class quickSort {
    public static void printArr(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
    public static void swap(int i, int j) {
        int temp = i;
        i = j;
        j = temp;
    }
    public static int partition(int[] arr, int start, int end) {
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
  
    public static void quickSort(int[] arr, int s, int e) {
        if (s >= e) return;
    
        // partition
        int p = partition(arr,s,e);
        // left part 
        quickSort(arr,s,p-1);
        // right sort
        quickSort(arr,p+1,e);
    }
    public static void main(String[] args) {
        int[] arr = {2,4,1,6,5};
        int n = arr.length;
        quickSort(arr, 0, n-1);
        printArr(arr);
    }
}