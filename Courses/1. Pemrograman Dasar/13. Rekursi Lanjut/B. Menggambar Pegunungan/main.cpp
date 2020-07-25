#include <iostream>

void draw(int n){
	if(n > 0){
		draw(n - 1);
		for(int i = 0; i < n; i++){
			std::cout << "*";
		}
		std::cout << std::endl;
		draw(n - 1);
	}
}

int main(){
	int n;
	std::cin >> n;
	draw(n);

	return 0;
}