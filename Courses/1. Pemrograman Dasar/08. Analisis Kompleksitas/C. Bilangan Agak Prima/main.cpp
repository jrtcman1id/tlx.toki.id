#include <iostream>
#include <vector>

bool checkAgaPrima(int number){

	bool result = true;

	int meetCounter = 0;
	for(int i = 2; i < number; i++){
	// for(int i = 2; i*i < number + 1; i++){
		if(number % i == 0){
			meetCounter++;
			if(meetCounter == 3){
				result = false;
				break;
			}
		}
	}

	return result;
}

int main(){

	int N, value;

	std::cin >> N;

	std::vector<int> values;

	for(int i = 0; i < N; i++){
		std::cin >> value; 
		values.push_back(value);
	}

	for(int i = 0; i < N; i++){
		if(checkAgaPrima(values[i]) == true){
			std::cout << "YA" << std::endl;
		}else{
			std::cout << "BUKAN" << std::endl;
		}
	}

	return 0;
}