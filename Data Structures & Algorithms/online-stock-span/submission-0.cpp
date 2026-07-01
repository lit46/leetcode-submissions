class StockSpanner {
    vector<int> stack;
public:
    StockSpanner() {}
    
    int next(int price) {
        stack.push_back(price);
        vector<int> copy(stack);
        int count=0;
        while(!copy.empty()&&copy.back()<=price){
            copy.pop_back();
            count++;
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */