class MinStack {
    int val;
    int tp;
    vector<int> stack;
public:
    MinStack() {}
    
    void push(int val) {
        this->val=val;
        stack.push_back(val);
        this->tp = val;
    }
    
    void pop() {
        stack.pop_back();
        if(!stack.empty()) this->tp = stack.back();
    }
    
    int top() {
        return tp;
    }
    
    int getMin() {
        int min=stack[0];
        for(int i: stack){
            if(i<min) min=i;
        }
        return min;
    }
};
