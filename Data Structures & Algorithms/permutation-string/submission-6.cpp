class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> need;
        unordered_map<char, int> current;
        for(char c: s1){
            need[c]++;
        }
        int n1 = s1.size();
        int n2 = s2.size();
        int left=0;
        int right=n1-1;
        for(int i=0;i<=right;i++){
            current[s2[i]]++;
        }
        if(current==need) return true;
        while(right+1<n2){
            current[s2[left]]--;
            if(current[s2[left]]==0) current.erase(s2[left]);
            left++;
            right++;
            current[s2[right]]++;
            if(current==need) return true;
        }
        return false;
    }
};
