

bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    int col[9][9] = {0};
    int row[9][9] = {0};
    int i,j;
    int element;
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            if (board[i][j] != '.'){
                element = board[i][j] - '0';
                col[i][element-1] = col[i][element-1]+ 1;
                if (col[i][element - 1] > 1) return false;
            }
        }
    }
    
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            if (board[j][i] != '.'){
                element = board[j][i] - '0';
                row[element-1][i] = row[element-1][i]+ 1;
                if (row[element-1][i] > 1) return false;
            }
        }
    }
    int countRow = -1;
    int countCol = -1;
    int arr[9] = {0};
    for ( int k = 0; k < 3; k++){
        countRow = countRow  + 3;
        for (int m = 0; m < 3; m++){
             countCol = countCol + 3;
            for (i = countRow - 2; i <= countRow; i++){
                for (j = countCol-2; j <= countCol; j++){
                    if (board[i][j] != '.'){
                        element = board[i][j] - '0';
                        arr[element-1] = arr[element-1]+ 1;
                        if (arr[element - 1] > 1){
                            return false;
                            }
                    }
                }
            }
            for (int n = 0; n < 9; n++){
                arr[n] =0;
            }
        }
         countCol = -1;
    }
    return true;
}