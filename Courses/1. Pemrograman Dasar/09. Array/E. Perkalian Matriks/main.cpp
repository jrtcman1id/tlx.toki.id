#include <iostream>

int main(){

    int M, N, P;

    std::cin >> N;
    std::cin >> M;
    std::cin >> P;

    int matA[N][M];
    int matB[M][P];
    int matC[N][P];

    // input matriks A
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            std::cin >> matA[i][j];
        }
    }

    // input matriks B
    for(int i = 0; i < M; i++){
        for(int j = 0; j < P; j++){
            std::cin >> matB[i][j];
        }
    }

    // menghitung matriks C = A x B
    for(int i = 0; i < N; i++){
        for(int j = 0; j < P; j++){
            matC[i][j] = 0;
            for(int k = 0; k < M; k++){
                matC[i][j] = matC[i][j] + matA[i][k] * matB[k][j];
            }
        }
    }

    // keluaran matirks C
    for(int i = 0; i < N; i++){
        for(int j = 0; j < P; j++){
            std::cout << matC[i][j];
            if(j < P - 1){
                std::cout << " ";
            }else{
                std::cout << "\n";
            }
        }
    }


    return 0;
}
