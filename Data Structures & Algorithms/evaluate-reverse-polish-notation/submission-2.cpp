class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;
        for(string c: tokens){
            if(c=="+"){
                int sum=stack.back();
                stack.pop_back();
                sum+=stack.back();
                stack.pop_back();
                stack.push_back(sum);      
            }else if(c=="-"){
                int diff=stack.back();
                stack.pop_back();
                diff=stack.back()-diff;
                stack.pop_back();
                stack.push_back(diff);
            }else if(c=="*"){
                int prod=stack.back();
                stack.pop_back();
                prod*=stack.back();
                stack.pop_back();
                stack.push_back(prod);
            }else if(c=="/"){
                int div=stack.back();
                stack.pop_back();
                div=stack.back()/div;
                stack.pop_back();
                stack.push_back(div);                
            }else{
                stack.push_back(stoi(c));
            }
        }
        return stack.back();
    }
};
