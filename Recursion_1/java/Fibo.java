package Recursion_1.java;

public class Fibo {
    public static void main(String[] args) {
        boolean ans = checkMemeber(13);
        System.out.println(ans);
    }
    public static boolean checkMemeber(int n) {
       
    int currentNumber = 0;
    int nextNumber = 1;
    int fiboNum = 0;
    if ( n == 0 || n == 1) return true;
    for (int i = 2; i <= n; ++i) {
        fiboNum = currentNumber + nextNumber;
        currentNumber = nextNumber;
        nextNumber = fiboNum;
          if (fiboNum == n) {
            return true;
        }
    }
    return false;
    }
}
