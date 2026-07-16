class FreqStack {
    stack<int> vals;
    unordered_map<int,int> freq;
public:
    FreqStack() { }
    
    void push(int val) {
        vals.push(val);
        freq[val]++;
    }
    
    int pop() {
        stack<int> order;
        int maxfreq=0;
        for(auto i=freq.begin(); i!=freq.end();i++){
            maxfreq = max(maxfreq, i->second);   
        }
        while(freq[vals.top()]!=maxfreq){
            order.push(vals.top());
            vals.pop();
        }
        freq[vals.top()]--;
        int res=vals.top();
        vals.pop();
        while(!order.empty()){
            vals.push(order.top());
            order.pop();
        }
        return res;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */