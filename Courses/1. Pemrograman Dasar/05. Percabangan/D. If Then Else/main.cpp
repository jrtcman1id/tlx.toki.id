#include <iostream>

int main(){
    int n;
    std::cin >> n;

    if(n > 0){
        std::cout << "positif" << std::endl;
    }else if(n == 0){
        std::cout << "nol" << std::endl;
    }else if(n < 0){
        std::cout << "negatif" << std::endl;
    }

    return 0;
}