#include <iostream>

int main(){

    int N;
    std::cin >> N;
    for(int i = 1; i <= N; i++){
        
        if(i % 10 == 0){
            continue;
        }

        if(i == 42){
            std::cout << "ERROR" << std::endl;
            break;
        }

        std::cout << i << std::endl;
    }

    return 0;
}