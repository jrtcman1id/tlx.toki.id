#include <iostream>
#include <vector>


int main(){

	int N, value;

	std::cin >> N;

	for(int i = 0; i < N; i++){
		std::cin >> value;

		bool result = true;

		if(value == 1){
			result = false;
		}

		// for(int i = 2; i < value; i++){
		for(int i = 2; i*i < value + 1; i++){
			if(value % i == 0){
				result = false;
				break;
			}
		}

		if(result == true){
			std::cout << "YA" << std::endl;
		}else{
			std::cout << "BUKAN" << std::endl;
		}

	}

	return 0;
}