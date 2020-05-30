#include <iostream>

int main(){

    int n;
    std::cin >> n;

    int sisaBagi = 0;

    // 4 / 1 = 4
    // 4 / 10 = 0

    // 12345 / 1 = 12345
    // 12345 / 10 = 1234
    // 12345 / 100 = 123
    // 12345 / 1000 = 12
    // 12345 / 10000 = 1
    // 12345 / 100000 = 0

    int i = 10;        
    while(n / i > 0){
        i = i * 10;
    }
    
    if(i == 10){
        std::cout << "satuan" << std::endl;
    }else if(i == 100){
        std::cout << "puluhan" << std::endl;
    }else if(i == 1000){
        std::cout << "ratusan" << std::endl;
    }else if(i == 10000){
        std::cout << "ribuan" << std::endl;
    }else if(i == 100000){
        std::cout << "puluhribuan" << std::endl;
    }

    return 0;
}