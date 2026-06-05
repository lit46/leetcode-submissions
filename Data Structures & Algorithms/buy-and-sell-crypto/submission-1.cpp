class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=0, b=0;
        int profit=0;
        int temp=-1;
        for(int i : prices){
            if(temp==-1||i<temp)
                temp=i;
            else if(i>temp&&i-temp>profit){
                a=temp;
                b=i;
                profit=b-a;
            }
        }
        return profit;
    }
};
