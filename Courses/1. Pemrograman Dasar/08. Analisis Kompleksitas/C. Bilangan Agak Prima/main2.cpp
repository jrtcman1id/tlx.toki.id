#include <iostream>
#include <vector>


int main(){

	int N, value;

	std::cin >> N;

	for(int i = 0; i < N; i++){
		std::cin >> value;

		bool result = true;

		int meetCounter = 0;
		// for(int i = 2; i < value; i++){
		for(int i = 2; i < value; i++){
			if(value % i == 0){
				meetCounter++;
				if(meetCounter == 3){
					result = false;
					break;
				}
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