#include <iostream>
#include <iomanip>

int main(){

	double A, T, hasil;

	std::cin >> A;
	std::cin >> T;

	hasil = 0.5 * A * T;

	std::cout << std::setprecision(2) << std::fixed << hasil << std::endl;

	return 0;
}
