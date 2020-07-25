#include <iostream>

void tulis(int kedalaman, int N, int catat[], bool pernah[]){
	if(kedalaman >= N){

		//cek zigzazg
		bool isZigZag = true;
		for(int i = 1; i < N - 1; i++){
			bool condition1 = catat[i] > catat[i - 1] && catat[i] > catat[i + 1];
			bool condition2 = catat[i] < catat[i - 1] && catat[i] < catat[i + 1];
			if(!(condition1 || condition2)){
				isZigZag = false;
				break;
			}
		}

		// cetak password
		if(isZigZag){
			for(int i = 0; i < N; i++){
				std::cout << catat[i];
			}
			std::cout << std::endl;
		}
	}else{
		// masuk ke lapisan lebih dalam
		for(int i = 1; i <= N; i++){
			if(!pernah[i - 1]){
				pernah[i - 1] = true;
				catat[kedalaman] = i; 
				tulis(kedalaman + 1, N, catat, pernah);
				pernah[i - 1] = false;
			}

		}
	}
}

int main(){
	int N = 0;
	std::cin >> N;
	int catat[N] = {0};
	bool pernah[N] = {0};
	tulis(0, N, catat, pernah);
	return 0;
}