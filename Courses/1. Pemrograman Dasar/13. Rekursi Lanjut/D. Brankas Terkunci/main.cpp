#include <iostream>

void tulis(int kedalaman, int N, int catat[], int K){

	if(kedalaman >= K){
		// tampilkan password
		for(int i = 0; i < K; i++){
			std::cout << catat[i];
			if(i >= K - 1){
				std::cout << std::endl;
			}else{
				std::cout << " ";
			}
		}
	}else{

		// masuk ke lapisan lebih dalam
		for(int i = kedalaman + 1; i <= N; i++){

			if(kedalaman <= 0){
				catat[kedalaman] = i; 
				tulis(kedalaman + 1, N, catat, K);
			}else{
				if(catat[kedalaman - 1] < i){
					catat[kedalaman] = i; 
					tulis(kedalaman + 1, N, catat, K);
				}
			}

		}
	}
}

int main(){
	int N = 0, K = 0;
	std::cin >> N;
	std::cin >> K;
	int catat[N] = {0};
	tulis(0, N, catat, K);
	return 0;
}