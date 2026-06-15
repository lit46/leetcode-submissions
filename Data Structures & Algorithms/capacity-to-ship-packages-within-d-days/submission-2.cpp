class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxw=0,sumw=0;
        for(int i: weights){
            if(i>maxw) maxw=i;
            sumw+=i;
        }
        int l=maxw, r=sumw;
        while(l<r){
            int c=l+(r-l)/2;
            int d=1;
            int sumc=0;
            for(int i=0;i<weights.size();i++){
                if(sumc+weights[i]>c){
                    sumc=0;
                    d++;
                    sumc=weights[i];
                }else{
                    sumc+=weights[i];
                }
            }
            if(d<=days){ 
                r=c;
            }else{
                l=c+1;
            }
        }
        return l;
    }
};