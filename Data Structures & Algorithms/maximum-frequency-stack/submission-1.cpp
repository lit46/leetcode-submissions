class FreqStack {
    vector<stack<int>> groups;
    unordered_map<int,int> freq;
    int maxfreq=0;
public:
    FreqStack() { }
    
    void push(int val) {
        freq[val]++;
        maxfreq=max(maxfreq, freq[val]);
        if(maxfreq>groups.size()){
            stack<int> f;
            f.push(val);
            groups.push_back(f);
        }else{
            groups[freq[val]-1].push(val);
        }
    }
    
    int pop() {
        int res=groups[maxfreq-1].top();
        freq[res]--;
        groups[maxfreq-1].pop();
        if(groups[maxfreq-1].empty()) maxfreq--;
        return res;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */