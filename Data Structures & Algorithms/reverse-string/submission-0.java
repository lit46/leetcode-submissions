class Solution {
    public void reverseString(char[] s) {
        char[] r = new char[s.length];
        for(int i=0;i<s.length;i++){
            r[i] = s[s.length-i-1];
        }
        for(int i=0;i<s.length;i++){
            s[i]=r[i];
        }
        return;
    }
}