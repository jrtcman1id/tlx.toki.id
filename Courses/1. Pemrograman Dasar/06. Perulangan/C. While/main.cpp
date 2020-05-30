#include <iostream>

int main(){
	
	std::string strArr[200];

	int idxArray = 0;
	while(std::cin.eof() == false) // selama blom EOF
	{
	    std::getline(std::cin, strArr[idxArray]);
	    idxArray++;
	}

	// tampilin data
	for(int i = 0; i < idxArray - 1; i++){
		std::cout << strArr[i] << std::endl;
	}

	return 0;
}