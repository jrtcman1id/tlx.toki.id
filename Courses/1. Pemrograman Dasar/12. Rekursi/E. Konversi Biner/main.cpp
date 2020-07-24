#include <iostream>
#include <string>

std::string getBiner(int N){

	std::string result;
	if(N == 0){
		result = "0";
	}else if(N == 1){
		result = "1";
	} else if(N % 2 == 1){
		result = getBiner(N/2) + "1";
	} else{
		result = getBiner(N/2) + "0";
	}

	return result;
}

int main(){
	int N;
	std::cin >> N;
	std::cout << getBiner(N) << std::endl;

	return 0;
}