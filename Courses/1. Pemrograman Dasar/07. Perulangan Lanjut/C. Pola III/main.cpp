#include <iostream>

int main(){

    int N;
    std::cin >> N;

    int value = 0; // initail value

    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            if(value % 10 == 0){
                value = 0;
            }

            std::cout << value;
            value++;
        }
        std::cout << std::endl;
    }

    return 0;
}
