package Strings;
// UULL
// 
public class RobotOrigin {

    public static boolean judgeCircle(String moves) {
        int count = 0;
        char[] charArr = moves.toCharArray();
        for (int i = 0; i < charArr.length; i += 1) {
            char ch = charArr[i];
            if (ch == 'U' || ch == 'R')
                count++;
            if (ch == 'D' || ch == 'L')
                count--;
        }
        return count == 0;
    }

    public static void main(String[] args) {
        // String moves = "LL";
        // String moves = "UD";
        String moves = "RRDD";
        System.out.println("Ans: " + judgeCircle(moves));
    }
}
