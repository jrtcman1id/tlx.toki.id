#include <iostream>

int main(){

    int M, N;

    std::cin >> N;
    std::cin >> M;

    int mat[M][N];

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            std::cin >> mat[i][j];
        }
    }

    for(int j = 0; j < N; j++){
        for(int i = 0; i < M; i++){
            std::cout << mat[M - i - 1][j];
            if(i < M - 1){
                std::cout << " ";
            }else{
                std::cout << "\n";
            }
        }
    }

    return 0;
}