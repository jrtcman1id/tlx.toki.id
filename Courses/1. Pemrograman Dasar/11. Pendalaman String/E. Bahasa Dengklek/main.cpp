#include <iostream>
#include <string>

int main(){

    std::string S;
    std::cin >> S;

    // 'A' bernilai 65
    // 'Z' bernilai 90
    // 'a' bernilai 97
    // 'z' bernilai 122

    int delta = 'a' - 'A'; // nilai positif

    for(int i = 0; i <= S.length(); i++){
        
        if(S[i] >= 'A' && S[i] <= 'Z'){ // cek lowercase
            // conversi char jadi lowercase ke uppercase
            S[i] = S[i] + delta;
        }else if(S[i] >= 'a' && S[i] <= 'z'){ // cek uppercase
            // conversi char jadi uppercase ke lowercase
            S[i] = S[i] - delta;
        }
    }
    
    std::cout << S << std::endl;

    return 0;
}