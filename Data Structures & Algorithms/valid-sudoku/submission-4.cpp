class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_map<int, int> rtemp;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int r=board[i][j]-'0';
                    rtemp[r]++;
                    if(rtemp[r]>1){
                        return false;
                    }
                }
            }
        }
        for(int j=0;j<9;j++){
            unordered_map<int, int> ctemp;
            for(int i=0;i<9;i++){
                if(board[i][j]!='.'){
                    int c=board[i][j]-'0';
                    ctemp[c]++;
                    if(ctemp[c]>1){
                        return false;
                    }
                }
            }
        }
        unordered_map<int, int> b0temp;
        unordered_map<int, int> b1temp;
        unordered_map<int, int> b2temp;
        unordered_map<int, int> b3temp;
        unordered_map<int, int> b4temp;
        unordered_map<int, int> b5temp;
        unordered_map<int, int> b6temp;
        unordered_map<int, int> b7temp;
        unordered_map<int, int> b8temp;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.'){
                    int b0=board[i][j]-'0';
                    b0temp[b0]++;
                    if(b0temp[b0]>1){
                        return false;
                    }
                }
            }
            for(int j=3;j<6;j++){
                if(board[i][j]!='.'){
                    int b1=board[i][j]-'0';
                    b1temp[b1]++;
                    if(b1temp[b1]>1){
                        return false;
                    }
                }
            }
            for(int j=6;j<9;j++){
                if(board[i][j]!='.'){
                    int b2=board[i][j]-'0';
                    b2temp[b2]++;
                    if(b2temp[b2]>1){
                        return false;
                    }
                }
            }
        }
        for(int i=3;i<6;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.'){
                    int b3=board[i][j]-'0';
                    b3temp[b3]++;
                    if(b3temp[b3]>1){
                        return false;
                    }
                }
            }
            for(int j=3;j<6;j++){
                if(board[i][j]!='.'){
                    int b4=board[i][j]-'0';
                    b4temp[b4]++;
                    if(b4temp[b4]>1){
                        return false;
                    }
                }
            }
            for(int j=6;j<9;j++){
                if(board[i][j]!='.'){
                    int b5=board[i][j]-'0';
                    b5temp[b5]++;
                    if(b5temp[b5]>1){
                        return false;
                    }
                }
            }
        }
        for(int i=6;i<9;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.'){
                    int b6=board[i][j]-'0';
                    b6temp[b6]++;
                    if(b6temp[b6]>1){
                        return false;
                    }
                }
            }
            for(int j=3;j<6;j++){
                if(board[i][j]!='.'){
                    int b7=board[i][j]-'0';
                    b7temp[b7]++;
                    if(b7temp[b7]>1){
                        return false;
                    }
                }
            }
            for(int j=6;j<9;j++){
                if(board[i][j]!='.'){
                    int b8=board[i][j]-'0';
                    b8temp[b8]++;
                    if(b8temp[b8]>1){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
