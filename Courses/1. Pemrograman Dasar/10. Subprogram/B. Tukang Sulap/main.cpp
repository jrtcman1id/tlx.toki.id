#include <iostream>

void swap(int &a, int &b){ // tukar nilai
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int N, T;

    int data[2][1001]; // data[0][x] => baris A
                       // data[1][x] => baris B 
    // input N
    std::cin >> N;

    // input data baris A dan B
    for(int  i = 0; i < 2; i++){
        for(int j = 0; j < N; j++){
            std::cin >> data[i][j];
        }
    }

    // input T
    std::cin >> T;
    
    // input data P x Q y
    // nilai P/Q itu A/B
    
    for(int i = 0; i < T; i++){
        char charP = 0;
        char charQ = 0;
        int x = 0;
        int y = 0;
        
        std::cin >> charP;
        std::cin >> x;
        std::cin >> charQ;
        std::cin >> y;

        // konversi A -> 0
        //          B -> 1
        // A dalam ascii itu 56
        // B dalam ascii itu 57
        int P = charP - 'A';
        int Q = charQ - 'A';

        swap(data[P][x - 1], data[Q][y - 1]);
    }

    // keluaran data baris A dan B
    for(int  i = 0; i < 2; i++){
        for(int j = 0; j < N; j++){
            std::cout << data[i][j];
            if(j < N - 1){
                std::cout << " ";
            }else{
                std::cout << "\n";
            }
        }
    }

    return 0;
}