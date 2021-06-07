// ref: https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/

class Solution {
    public boolean isSumEqual(String firstWord, String secondWord, String targetWord) {
        int first = getNumericalValue(firstWord);
        int second = getNumericalValue(secondWord);
        int target = getNumericalValue(targetWord);

        return (first + second) == target;
    }

    public int getNumericalValue(String word) {
        String strNumber = "";
        for (int i = 0; i < word.length(); i++) {
            char ch = word.charAt(i);
            int n = (int)ch - (int)'a';
            strNumber += String.valueOf(n);
        }

        return Integer.parseInt(strNumber);
    }
}