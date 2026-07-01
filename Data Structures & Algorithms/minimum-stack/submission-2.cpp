class MinStack {
    int val;
    int tp;
    vector<int> stack;
    vector<int> minstack;
public:
    MinStack() {}
    
    void push(int val) {
        this->val=val;
        stack.push_back(val);
        this->tp = val;
        if(minstack.empty()||minstack.back()>=val) minstack.push_back(val);
    }
    
    void pop() {
        if(stack.back()==minstack.back()) minstack.pop_back();
        stack.pop_back();
        if(!stack.empty()) this->tp = stack.back();
    }
    
    int top() {
        return tp;
    }
    
    int getMin() {
        return minstack.back();
    }
};
