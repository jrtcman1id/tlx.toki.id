#include <iostream>

int main(){

	int N, M, bagi, sisaBagi;
	std::cin >> N;
	std::cin >> M;

	bagi = N / M;
	sisaBagi = N % M;

	std::cout << "masing-masing " << bagi << "\n";
	std::cout << "bersisa " << sisaBagi << "\n";

	return 0;
}