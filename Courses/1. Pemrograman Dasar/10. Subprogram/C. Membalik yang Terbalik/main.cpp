#include <iostream>

int reverse(int x) {
    int temp = x;
    int ret  = 0;

    while (temp > 0) {
        ret  = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }

    return ret;
}

int main(){
    int A, B, C;
    std::cin >> A;
    std::cin >> B;

    C = reverse(A) + reverse(B); 

    std::cout << reverse(C) << std::endl;

    return 0;
}