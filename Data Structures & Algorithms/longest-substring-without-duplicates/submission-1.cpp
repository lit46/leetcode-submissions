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
                if(length<right-left) length=right-left;
                while(s[left]!=s[right]){ 
                    ucs.erase(s[left]);
                    left++;
                }
                ucs.erase(s[left]);
                left++;
            }
            ucs.insert(s[right]);
            right++;
        }
        if(ucs.size()>length) length=ucs.size();
        return length;
    }
};
