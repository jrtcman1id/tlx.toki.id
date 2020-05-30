#include <iostream>
#include <cmath>

int calculateDistance(int x1, int y1, int x2, int y2, int D){

    int distanceX = abs(x2 - x1);
    int distanceY = abs(y2 - y1);
    int resultX = 0;
    int resultY = 0;
    for(int i = 0; i < D; i++){

        if(i == 0){
            resultX = 1;
            resultY = 1;
        }

        resultX = resultX * distanceX;
        resultY = resultY * distanceY;
    }

    return resultX + resultY;
}

int main(){

    int N, D;
    std::cin >> N;
    std::cin >> D;

    int data[2][N];

    for(int i = 0; i < N; i++){
        std::cin >> data[0][i];
        std::cin >> data[1][i];
    }

    int distance = 0;
    int distanceMin = 0;
    int distanceMax = 0;
    bool first = true;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            
            if(i == j){continue;}

            distance = calculateDistance(data[0][i], data[1][i], data[0][j], data[1][j], D);
            if(first == true){
                distanceMin = distance;
                distanceMax = distance;
                first = false;
            }

            if(distance > distanceMax){
                distanceMax = distance;
            }

            if(distance < distanceMin){
                distanceMin = distance;
            }
        }  
    }

    std::cout << distanceMin << " " << distanceMax << std::endl;

    return 0;
}