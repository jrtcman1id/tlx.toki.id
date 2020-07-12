#include <iostream>

int primaGanjilGenap(int n){
	int result = 1;

	if(n == 1){
		result = 1;
	}else if(n % 2 == 0){
		result = (n/2) * primaGanjilGenap(n - 1);
	}else{
		result = n * primaGanjilGenap(n - 1);
	}

	return result; 
};

int main(){

    int N;
    std::cin >> N;

    std::cout << primaGanjilGenap(N) << std::endl;

    return 0;
};