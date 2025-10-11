// Last updated: 10/12/2025, 12:23:50 AM
class Solution {
    public boolean isPalindrome(String s) {
         StringBuilder cleaned = new StringBuilder();

        for (char c : s.toCharArray()) {
            if (Character.isLetterOrDigit(c)) {       // keep only letters and digits
                cleaned.append(Character.toLowerCase(c)); // convert to lowercase
            }
        }

        int i=0;
        int j=cleaned .length()-1;

        while(i<=j){
            if(cleaned.charAt(i)==cleaned.charAt(j)){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
}