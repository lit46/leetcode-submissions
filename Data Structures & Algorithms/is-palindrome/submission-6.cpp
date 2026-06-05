class Solution {
public:
    bool isPalindrome(string s) {
        string r="",s2="";
        for_each(s.begin(), s.end(), [](char& c) {
            c = tolower(c);
        });
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s.at(i)!='?'&&s.at(i)&&'!'&&s.at(i)!='*'&&s.at(i)!=' '&&s.at(i)!=','&&s.find("'")==-1&&s.at(i)!='.'&&s.at(i)!=':')
                s2+=s.at(i);
        }
        for(int i=n-1;i>=0;i--){
            if(s.at(i)!='?'&&s.at(i)&&'!'&&s.at(i)!='*'&&s.at(i)!=' '&&s.at(i)!=','&&s.find("'")==-1&&s.at(i)!='.'&&s.at(i)!=':')
                r+=s.at(i);
        }
        if(r==s2){
            return true;
        }else{
            return false;
        }
    }
};
