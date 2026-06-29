class Solution {
public:
    string minWindow(string s, string t) {
        int required=0, formed=0, beststart=0, bestlength=1001;
        vector<int> need(128, 0), window(128, 0);
        for(int i=0;i<t.size();i++){
            if(need[t[i]]==0) required++;
            need[t[i]]++;
        } 
        int left=0, right=0;
        while(right<s.size()){
            window[s[right]]++;
            if(need[s[right]]==window[s[right]]&&need[s[right]]>0) formed++;
            while(formed==required){
                if(right-left+1<bestlength){
                    bestlength=right-left+1;
                    beststart=left;
                }
                window[s[left]]--;
                if(window[s[left]]<need[s[left]]&&need[s[left]]>0) formed--;
                left++;
            }
            right++;
        }
        if(bestlength==1001) return "";
        return s.substr(beststart, bestlength);
    }
};
