class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;
        int l=0, r=k-1;
        while(r<arr.size()-1&&(abs(arr[r]-x)>=abs(arr[r+1]-x)||abs(arr[l]-x)>abs(arr[r+1]-x))){
            l++;
            r++;
        }
        for(int i=l;i<=r;i++){
            res.push_back(arr[i]);
        }
        return res;
    }
};