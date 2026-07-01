class MinStack {
    vector<int> stack;
    vector<int> minstack;
public:
    MinStack() {}
    
    void push(int val) {
        stack.push_back(val);
        if(minstack.empty()||minstack.back()>=val) minstack.push_back(val);
    }
    
    void pop() {
        if(stack.back()==minstack.back()) minstack.pop_back();
        stack.pop_back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return minstack.back();
    }
};
