class Solution {

    public int numDecodings(String s) {
        int twoBack = 1; // empty string
        int oneBack = s.charAt(0) == '0' ? 0 : 1;
        int current = oneBack;
        for (int i = 2; i < s.length() + 1; i++) {
            current = 0;
            if (s.charAt(i - 1) != '0') {
                current += oneBack;
            }
            if (
                s.charAt(i - 2) == '1' ||
                (s.charAt(i - 2) == '2' && s.charAt(i - 1) < '7')
            ) {
                current += twoBack;
            }
            twoBack = oneBack;
            oneBack = current;
        }
        return current;
    }
}