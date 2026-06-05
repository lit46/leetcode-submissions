class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge;
        int n = word1.size() + word2.size();
        for(int i=0;i<n;i++){
            if(i<word1.size()) merge.push_back(word1[i]);
            if(i<word2.size()) merge.push_back(word2[i]);         
        }
        return merge.substr(0,n);
    }
};