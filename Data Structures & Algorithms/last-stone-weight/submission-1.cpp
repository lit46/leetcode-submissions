class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i: stones){
            pq.push(i);
        }
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x>y){
                x=x-y;
                pq.push(x);
            }else if(x<y){
                y=y-x;
                pq.push(y);
            }
        }
        if(pq.empty()) return 0;
        return pq.top();
    }
};
