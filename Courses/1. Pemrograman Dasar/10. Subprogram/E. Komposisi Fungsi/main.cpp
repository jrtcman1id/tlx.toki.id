#include <iostream>
#include <cmath>

//  A, B, K, dan x.
//  f(x) = |Ax + B|
int func(int A, int B, int K, int x){
    return abs(A*x + B);
}

int main(){
    int A, B, K, x;
    std::cin >> A;
    std::cin >> B;
    std::cin >> K;
    std::cin >> x;
    
    int result = 0;
    for(int i = 0; i < K; i++){
        result = func(A, B, K, x);
        x = result;
    }

    std::cout << result << std::endl;

    return 0;
}
