public class BinarySearch {

    public static int binarySearch(int[] arr,int val) {
        int start = 0, mid, end = arr.length - 1;
        while (start <= end) {
            mid = (start + end) / 2;
            if (arr[mid] == val) {
                return mid;
            } else if (arr[mid] < val) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6};
       int bs =  binarySearch(arr, 4);
        System.out.println(bs);
    }
}
