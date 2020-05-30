#include <iostream>
#include <cstring>

int main(){
	int N = 0;
	std::cin >> N;

    // input data
    int intArr[N]; 

    // banyaknya kejadian 1 - 1000
    // 1 simpen di index 0
    // 100 di 99 
    int counter[1000]; 

    // menajdikan isi counter 0
    std::memset(counter, 0, sizeof(counter));

    for(int i = 0; i < N; i++){
        std::cin >> intArr[i];
        counter[intArr[i] - 1]++;
    }

    int idxMaxCounter = 0; // index awal max
    int maxCounter = counter[0]; // nilai awal max
    
    for(int i = 0; i < 1000; i++){
        if(counter[i] >= maxCounter){
            maxCounter = counter[i]; 
            idxMaxCounter = i;
        }
    }

    std::cout << idxMaxCounter + 1 << std::endl;

	return 0;
}

