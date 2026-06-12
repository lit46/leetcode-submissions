class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ucs;
        if(s.size()==0) return 0;
        int left=0;
        int right=1;
        int length=1;
        ucs.insert(s[left]);
        while(right<s.size()){
            while(ucs.find(s[right])!=ucs.end()){
                while(s[left]!=s[right]){ 
                    ucs.erase(s[left]);
                    left++;
                }
                ucs.erase(s[left]);
                left++;
            }
            ucs.insert(s[right]);
            right++;
            length=max(length, right-left);
        }
        return length;
    }
};
