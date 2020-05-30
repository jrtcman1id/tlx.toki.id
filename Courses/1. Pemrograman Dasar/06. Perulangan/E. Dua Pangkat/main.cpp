#include <iostream>

int main(){

    long long int inputN, N;
    std::cin >> inputN;

    N = inputN;
    bool isGenap = false; // nilai awal
    do{
        if(N % 2 != 0){
            isGenap = false;
        }else{
            // cek selanjutnya
            isGenap = true;
            N = N / 2;
        }
    }while(isGenap == true && N > 1);
    
    // ambil kesimpulan
    if(inputN == 1){
        std::cout << "ya" << std::endl;
    }else if(isGenap == false){
        std::cout << "bukan" << std::endl;
    }else{
        if(N == 1){
            std::cout << "ya" << std::endl;
        }else{
            std::cout << "bukan" << std::endl;
        }
    }
    
    return 0;
}