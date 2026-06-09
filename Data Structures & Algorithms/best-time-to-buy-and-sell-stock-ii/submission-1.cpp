class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int b=0, profit=0;
       for(int i=0;i<prices.size();i++){
        if(prices[i]<prices[b]){
            b=i;
        }else if(prices[i]>=prices[b]){
            profit+=prices[i]-prices[b];
            b=i;
        }
       }
       return profit; 
    }
};