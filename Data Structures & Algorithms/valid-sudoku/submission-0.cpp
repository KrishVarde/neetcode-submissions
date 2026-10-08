class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> occur;
        for(int i = 0; i < board.size() ; i++){
            for(int j = 0; j < board.size(); j++){
                if(board[i][j] != '.'){
                    if((board[i][j] >= '0' && board[i][j] <= '9') && occur.find(board[i][j]) != occur.end())
                        return false;
                    occur[board[i][j]]++;
                }
            }
            occur.clear();
            for(int j = 0; j < board.size(); j++){
                if(board[j][i] != '.'){
                    if(occur.find(board[j][i]) != occur.end())
                        return false;
                    occur[board[j][i]]++;                    
                }
            }
            occur.clear();
        }

        for(int i = 0 ;i < 3; i++){
            for(int j = 0; j < 3; j++){
                occur.clear();
                for(int boxrow = i*3 ; boxrow < ((i*3)+3) ; boxrow++){
                    for(int boxcol = j*3 ; boxcol < ((j*3)+3) ; boxcol++){
                        if(board[boxrow][boxcol] != '.'){
                            if(occur.find(board[boxrow][boxcol]) != occur.end())
                                return false;
                            occur[board[boxrow][boxcol]]++;
                        }
                    }
                }
            }
        }
        return true;
    }
};
