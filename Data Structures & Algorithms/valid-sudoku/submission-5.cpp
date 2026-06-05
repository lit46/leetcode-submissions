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
        
        for(int brow=0;brow<3;brow++){
            for(int bcol=0;bcol<3;bcol++){
                unordered_map<int, int> btemp;
                for(int i=brow*3;i<brow*3+3;i++){
                    for(int j=bcol*3;j<bcol*3+3;j++){
                        if(board[i][j]!='.'){
                            int b=board[i][j]-'0';
                            btemp[b]++;
                            if(btemp[b]>1){
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};
