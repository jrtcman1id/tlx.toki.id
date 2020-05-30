#include <iostream>

int main(){

    int N;
    std::cin >> N;

    int value = 0;
    int jumlah = 0;
    for(int i = 0; i < N; i++){
        std::cin >> value;
        jumlah += value;
    }

    std::cout << jumlah << std::endl;

    return 0;
}