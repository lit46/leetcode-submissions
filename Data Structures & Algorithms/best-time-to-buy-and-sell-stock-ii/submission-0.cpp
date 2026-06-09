class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int b=0, s=0, profit=0;
       for(int i=0;i<prices.size();i++){
        if(prices[i]<prices[b]){
            b=i;
            s=b;
        }else if(prices[i]>=prices[b]){
            s=i;
            profit+=prices[s]-prices[b];
            b=i;
        }
       }
       return profit; 
    }
};