class NumMatrix {
private:
    vector<vector<int>> prefixsum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        prefixsum = vector<vector<int>>(rows+1,vector<int>(columns+1,0));
        for(int row=0;row<rows;row++){
            for(int column=0;column<columns;column++){
                prefixsum[row+1][column+1]=prefixsum[row][column+1]-prefixsum[row][column]+prefixsum[row+1][column]+matrix[row][column];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        int net = prefixsum[row2+1][col2+1];
        int top = prefixsum[row1][col2+1];
        int left = prefixsum[row2+1][col1];
        int twice = prefixsum[row1][col1];
        sum = net - top - left + twice;
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */