#include <iostream>
#include <cmath>

int fungsiMutlak(int A, int B, int K, int x){
	int result = 0;

	if(K == 0){
		result = x;
	}else{
		result = A * fungsiMutlak(A, B, K - 1, x) + B ;
		result = abs(result);
	}

	return result; 
};

int main(){

    int A, B, K, x;
    std::cin >> A;
    std::cin >> B;
    std::cin >> K;
    std::cin >> x;

    std::cout << fungsiMutlak(A, B, K ,x) << std::endl;

    return 0;
};
