package Character_Arrays_and_2D_Arrays.java;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class CheckPermutation {

    public static boolean isPermutation(String str1, String str2) {
      if (str1.length() != str2.length()) {
        return false;
      }
        int[] freqArr = new int[256];
        
        for (int i = 0; i < 256; ++i) {
            freqArr[i] = 0;
        }
        for (int i = 0; i < str1.length(); ++i) {
            char ch = str1.charAt(i);
            ++freqArr[ch];
        }
        for (int i = 0; i < str2.length(); ++i) {
           char ch = str2.charAt(i);
           --freqArr[ch];
        }
        for (int i = 0; i < 256; ++i) {
            if (freqArr[i] != 0) {
                return false;
            }
        }
        return true;
    }
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	public static void main(String[] args) throws NumberFormatException, IOException {
		String str1 = br.readLine();
		if (str1 != null) {
			str1 = str1.trim();
		} else {
			str1 = "";
		}

		String str2 = br.readLine();
		if (str2 != null) {
			str2 = str2.trim();
		} else {
			str2 = "";
		}

		boolean ans = CheckPermutation.isPermutation(str1, str2);

		System.out.println(ans);
		
	}
    
}