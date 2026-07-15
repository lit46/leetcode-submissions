class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> str;
        int pos=0;
        while(pos<s.length()){
            if(pos<s.length()&&isalpha(s[pos])){
                string t="";
                while(pos<s.length()&&isalpha(s[pos])){
                    t+=s[pos];
                    pos++;
                }
                if(str.empty()||str.top()=="[") str.push(t);
                else
                    str.top()+=t;
            }
            if(pos<s.length()&&isdigit(s[pos])){
                int k=0;
                while(pos<s.length()&&isdigit(s[pos])){
                    k=k*10+s[pos]-'0';
                    pos++;
                }
                num.push(k);
            }
            if(pos<s.length()&&s[pos]=='['){
                str.push("[");
            }else if(pos<s.length()&&s[pos]==']'){
                string temp = str.top();
                str.pop();
                str.pop();
                string res = "";
                int cnt=num.top();
                num.pop();
                while(cnt--){
                    res+=temp;
                }
                if(str.empty()||str.top()=="[") str.push(res);
                else
                    str.top()+=res;
            }
            pos++;
        }
        return str.top();
    }
};