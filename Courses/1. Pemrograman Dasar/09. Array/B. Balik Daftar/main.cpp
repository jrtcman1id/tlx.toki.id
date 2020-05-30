#include <iostream>

int main(){
	int MAX = 100;
	int intArr[MAX];

	int idxArray = -1;
	while(std::cin.eof() == false && idxArray < MAX) // selama blom EOF
	{   
        idxArray++;
	    std::cin >> intArr[idxArray];
	}

	// tampilin data
	for(int i = idxArray - 1; i >= 0; i--){
		std::cout << intArr[i] << std::endl;
	}

	return 0;
}
