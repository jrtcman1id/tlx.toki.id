#include <iostream>

int main(){

    int N, value, max, min;

    max = 0;
    min = 0;

    std::cin >> N;
    for(int i = 0; i < N; i++){
        std::cin >> value;
        
        if(i == 0){
            min = value;
            max = value;
        }

        // get max
        if(value > max){
            max = value;
        } 

        // get min
        if(value < min){
            min = value;
        }
    }

    std::cout << max << " " << min << std::endl;

    return 0;
}