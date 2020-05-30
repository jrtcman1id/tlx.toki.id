#include <iostream>
#include <string>

int main(){

    std::string S;
    std::cin >> S;

    int delta = 'a' - 'A'; // nilai positif

    if(S.find("_") == -1){
        // std::cout << "camel case" << std::endl;
        // camel case to snake case
        for(int i = 0; i < S.length(); i++){
            if(S[i] >= 'A' && S[i] <= 'Z'){ // cek uppercase
                S[i] = S[i] + delta;
                S.insert(i, "_");
            }
        }
    }else{
        // std::cout << "snake case" << std::endl;
        // snake case to camel case
        for(int i = 0; i < S.length(); i++){
            if(S[i] == '_'){
                S.erase(i, 1);
                S[i] = S[i] - delta;
            }
        }
    }

    std::cout << S << std::endl;

    return 0;
}
