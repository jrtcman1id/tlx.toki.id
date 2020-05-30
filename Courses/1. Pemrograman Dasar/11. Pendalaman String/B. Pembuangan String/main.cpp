#include <iostream>
#include <string>

int main(){

    std::string S, T;
    std::cin >> S;
    std::cin >> T;

    std::string::size_type posStr = 0;

    do{
        posStr = S.find(T);
        if(posStr == -1){ // T tidak ditemukan dalam S
            break; // keluar loop
        }

        // hapus T dalam S
        S.erase(posStr, T.length());
    }while(true); // loop abadi, keluar pakai break

    std::cout << S << std::endl;

    return 0;
}