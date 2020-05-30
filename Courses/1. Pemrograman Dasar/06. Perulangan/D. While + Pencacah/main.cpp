#include <iostream>

int main(){
	
	int intArr[200];

	int idxArray = 0;
	while(std::cin.eof() == false) // selama blom EOF
	{
	    std::cin >> intArr[idxArray];
	    idxArray++;
	}

	
	int jumlah = 0; 
	for(int i = 0; i < idxArray - 1; i++){
		jumlah += intArr[i];
	}

	std::cout << jumlah << std::endl;

	return 0;
}