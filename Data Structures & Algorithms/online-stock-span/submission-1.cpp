class StockSpanner {
    struct Node{
        int price;
        int span;
    };
    stack<Node> st;
public:
    StockSpanner() {}
    
    int next(int price) {
        Node curr;
        curr.price = price;
        curr.span=1;
        while(!st.empty()&&st.top().price<=price){
            curr.span+=st.top().span;
            st.pop();
        }
        st.push(curr);
        return st.top().span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */