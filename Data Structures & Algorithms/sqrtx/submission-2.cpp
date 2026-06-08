class Solution {
public:
    int mySqrt(int x) {
        int i=1;
        int r=x;
        int res=0;
        while(i<=r){
            int mid=i+(r-i)/2;
            if(mid==x/mid) return mid;
            else if(mid>x/mid){
                res=mid-1;
                r=mid-1;
            }else if(mid<x/mid){
                i=mid+1;
            }
        }
        return res;
    }
};