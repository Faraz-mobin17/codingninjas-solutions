
public class Solution {
	
	public static String minLengthWord(String input){
		
		// Write your code here
		int minLengthStr = Integer.MAX_VALUE;
		int strLen = Integer.MAX_VALUE;
		int idx = -1;
		String[] splitArray = input.split(" ");
		for (int i = 0; i < splitArray.length; i += 1) {
			strLen = splitArray[i].length();
			if (strLen < minLengthStr) {
				minLengthStr = strLen;
				idx = i;
			}
		}
		return splitArray[idx];
	}
}
