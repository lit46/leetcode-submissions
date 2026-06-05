class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i=0;i<strs.size();i++){
            int length = strs[i].size();
            s+=to_string(length)+"&"+strs[i];
        }
        cout<<s;
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;
        while(i < s.size()) {
            string n = "";
            while(s[i] != '&') {
                n += s[i];
                i++;
            }
            int len = stoi(n);
            i++;
            strs.push_back(s.substr(i, len));
            i += len;
        }
        return strs;
    }
};