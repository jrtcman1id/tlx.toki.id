#include <iostream>
#include <string>

int main(){
    std::string S1, S2, S3, S4;
    
    std::cin >> S1;
    std::cin >> S2;
    std::cin >> S3;
    std::cin >> S4;

    // mengahapus S2 dari S1
    S1.erase(S1.find(S2), S2.length());
    
    // memasukkan S4 ke S1 berdasarkan posisi S3 + panjang S3  didalam S1
    S1.insert(S1.find(S3) + S3.length(), S4);

    std::cout << S1 << std::endl; 

    return 0;
}
