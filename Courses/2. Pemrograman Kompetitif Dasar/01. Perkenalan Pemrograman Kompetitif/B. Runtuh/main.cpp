#include <iostream>

bool chekAllBlack(int board[20][8], int currentR, int C){
    // cek hitam sejajar dari baris paling bawah
    bool allBlack = true;
    
    for(int j = 0; j < C; j++){
       if(board[currentR][j] == 0){
           allBlack = false;
           break;
       }
    }

    return allBlack;
}

void makeAllWhite(int board[20][8], int currentR, int C){
    // cek hitam sejajar dari baris paling bawah
    for(int j = 0; j < C; j++){
       board[currentR][j] = 0;
    }
}

void makeFall(int board[20][8], int currentR, int currentC, int R, int C){

    board[currentR][currentC] = 0;

    int endFallIndex = -1;

    // cek hitam sejajar dari baris paling bawah
    for(int i = currentR + 1; i < R; i++){
       if(board[i][currentC] == 1){
           endFallIndex = i - 1;
           break; 
       }
    }

    if(endFallIndex == -1){
        endFallIndex = R - 1;
    }

    board[endFallIndex][currentC] = 1;
}

void falldown(int board[20][8], int R, int C){
    // cek hitam sejajar dari baris paling bawah

    int firstFoundIndex = -1;
    for(int i = R - 1; i >= 0; i--){
        if(chekAllBlack(board, i, C) == true){
            if(firstFoundIndex == -1){
                firstFoundIndex = i;
            }
            makeAllWhite(board, i, C);
        };
    }

    // runtuh
    if(firstFoundIndex >= 0){
        for(int i = firstFoundIndex; i >= 0; i--){
            for(int j = 0; j < C; j++){
                if(board[i][j] == 1){
                    makeFall(board, i, j, R, C);
                }
            }
        }

        falldown(board, R, C);
    }
}

int main(){

    int R = 0, C = 0;

    std::cin >> R >> C;

    // int board[R][C] = {0};
    int board[20][8] = {0};

    std::string input;

    for(int i = 0; i < R; i++){
        std::cin >> input;
        for(int j = 0; j < C; j++){
            board[i][j] = input[j] - '0';
        }
    }

    falldown(board, R, C);

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            std::cout << board[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}