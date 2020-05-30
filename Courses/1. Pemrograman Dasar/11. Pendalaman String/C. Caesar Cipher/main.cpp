#include <iostream>
#include <string>

int main(){
    std::string S;
    int K;

    std::cin >> S;
    std::cin >> K;

    for(int i = 0; i < S.length(); i++){
        // normalisasi nilai, char 'a' jadi 0, char 'z' jadi 25
        S[i] = S[i] - 'a';

        // sifat siklis dengan cara modulus/sisa bagi
        // 25 maksimum, misal 26 kembali jadi 0
        // menggeser karakter sebannyak K karaker
         S[i] = (S[i]  +  K) % 26;

         // balik lagi ke range 'a' - 'z'
         S[i] = S[i] + 'a';
    }

    std::cout << S << std::endl;

    return 0;
}
