#include <iostream>

int main(){

    int x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    int deltaX = x2 - x1;
    if(deltaX < 0){
        deltaX *= -1;
    }

    int deltaY = y2 - y1;
    if(deltaY < 0){
        deltaY *= -1;
    }

    std::cout << deltaX + deltaY << std::endl;

    return 0;
}