class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        for(int i=0;i<m;i++){
            if(target>matrix[i][n-1]) continue;
            int l=0;
            int r=n-1;
            while(l<r){
                int mid=l+(r-l)/2;
                if(target<matrix[i][mid]){
                    r=mid;
                }else if(target==matrix[i][mid]){
                    return true;
                }else{
                    l=mid+1;
                }
            }
            if(matrix[i][l]==target) return true;
        }
        return false;
    }
};
