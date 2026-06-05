class Solution {
    public:
    bool validPalindrome(string s) {
        int i=0, j=s.size()-1,flag=0;
        while(j>i){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                if(s[i]==s[j-1]&&s[j]!=s[i+1]&&flag==0){
                    j--;
                    flag++;
                }else if(s[j]==s[i+1]&&s[i]!=s[j-1]&&flag==0){
                    i++;
                    flag++;
                }else if(s[j]==s[i+1]&&s[i]==s[j-1]&&flag==0){
                    return true;
                }else
                    return false;
            }
        }
        return true;
    }
};