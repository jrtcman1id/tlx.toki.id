#include <iostream>

int main(){

    int N, K;

    std::cin >> N >> K;

    for(int i = 1; i <= N; i++){
        if(i % K == 0){
            std::cout << "*";
        }else{
            std::cout << i;
        }

        if(i == N){
            std::cout << std::endl;
        }else{
            std::cout << " ";
        }
        
    }
    
    return 0;
}