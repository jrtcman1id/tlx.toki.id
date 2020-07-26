#include <iostream>

void jalan(int M, int N, int r, int c, int val, int data[25][25], bool pernah[25][25], int& count){
    if(r >= 0 && r < M && c >= 0 && c < N){
        if( !pernah[r][c] ){
            pernah[r][c] = true;
            if(data[r][c] == val){
                count++;
                jalan(M, N, r + 1, c, val, data, pernah, count); // bawah
                jalan(M, N, r - 1, c, val, data, pernah, count); // atas
                jalan(M, N, r, c + 1, val, data, pernah, count); // kanan
                jalan(M, N, r, c - 1, val, data, pernah, count); // kiri 
            }
        }
    }
}

int main(){

    int M = 0, N = 0;
    std::cin >> M >> N;

    int data[25][25] = {0};
    bool pernah[25][25] = {0};

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            std::cin >> data[i][j];
        }
    }

    int count = 0;
    int B = 0, K = 0;
    std::cin >> B >> K;

    jalan(M, N, B, K, data[B][K], data, pernah, count);
    
    std::cout << count * (count - 1) << std::endl;

    return 0;
}