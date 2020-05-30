#include <iostream>


void bisaBagi(int divider, int &dividerCounter, int &N){
    dividerCounter = 0;
    while(N % divider == 0){
        dividerCounter++;
        N = N / divider;
    }
}

int main(){

    int N;
    std::cin >> N;

    for(int i = 2; i <= N; i++){
        int counter = 0;
        bisaBagi(i, counter, N);
        if(counter > 0){
            if(counter == 1){
                std::cout << i;
            }else{
                std::cout << i << "^" << counter;
            }

            if(N == 1){ // last prime
                std::cout << std::endl;
            }else{
                std::cout << " x ";
            }
            
        }
    }

    return 0;
}