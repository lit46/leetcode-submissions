class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp="";
        int j=0;
        for(int i=0;i<strs[0].size();i++){
            char c=strs[j][i];
            while(j<strs.size()){
                if(c!=strs[j][i]||i>strs[j].size()){
                    return lcp;
                }
                j++;
            }
            lcp+=c;
            j=0;
        }
        return lcp;
    }
};