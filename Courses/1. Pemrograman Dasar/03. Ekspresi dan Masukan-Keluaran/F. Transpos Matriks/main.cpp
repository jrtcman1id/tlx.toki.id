#include <iostream>
#include <algorithm>

int main(){

	int a00, a01, a02;
	int a10, a11, a12;
	int a20, a21, a22;

	std::cin >>  a00 >> a01 >> a02;
	std::cin >>  a10 >> a11 >> a12;
	std::cin >>  a20 >> a21 >> a22;

	std::swap(a01, a10);
	std::swap(a02, a20);
	std::swap(a12, a21);

	std::cout <<  a00 << " " << a01 << " " << a02 << std::endl;
	std::cout <<  a10 << " " << a11 << " " << a12 << std::endl;
	std::cout <<  a20 << " " << a21 << " " << a22 << std::endl;

	return 0;
}