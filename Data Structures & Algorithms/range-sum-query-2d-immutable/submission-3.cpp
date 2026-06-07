class NumMatrix {
private:
    vector<vector<int>> prefixsum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        prefixsum = vector<vector<int>>(rows,vector<int>(columns,0));
        for(int row=0;row<rows;row++){
            prefixsum[row][0]=matrix[row][0];
            for(int column=1;column<columns;column++){
                prefixsum[row][column]=prefixsum[row][column-1]+matrix[row][column];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int row=row1;row<=row2;row++){
            if(col1>0){
                sum+=prefixsum[row][col2]-prefixsum[row][col1-1];
            }else{
                sum+=prefixsum[row][col2];
            }
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */