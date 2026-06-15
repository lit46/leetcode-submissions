class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=0;
        for(int i: piles){
            if(i>r) r=i;
        }
        while(l<r){
            int k=l+(r-l)/2;
            int hrs=0;
            for(int i: piles){
                if(i%k==0){
                    hrs+=i/k;
                }else{
                    hrs+=i/k +1;
                }
            }
            if(hrs<=h)
                r=k;
            else
                l=k+1;
        }
        return l;
    }
};
