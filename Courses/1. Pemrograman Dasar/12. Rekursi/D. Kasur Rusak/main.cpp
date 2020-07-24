#include <iostream>
#include <string>

bool cekPalindrom(std::string str){
	bool result = false;

	if(str.length() == 1 || str.length() == 0){
		result = true;
	}else{
		result = (str[0] == str[str.length() - 1]);
		if(result == true){
			str.erase(0, 1);
			str.erase(str.length() - 1, 1);
			result = cekPalindrom(str);
		}
	}

	return result; 
};

int main(){

    std::string str;
    // std::cin >> str;
    std::getline(std::cin, str);
    
    if(cekPalindrom(str) == true){
    	std::cout << "YA" << std::endl;
    }else{
    	std::cout << "BUKAN" << std::endl;
    }

    return 0;
};
