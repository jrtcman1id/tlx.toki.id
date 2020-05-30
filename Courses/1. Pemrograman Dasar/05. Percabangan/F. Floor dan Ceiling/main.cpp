#include <iostream>

int main(){
    double fData;
    std::cin >> fData;
    int iData = static_cast<int>(fData);

    int floorData = 0;
    int ceilData = 0;
    // 
    if(iData < fData){
        floorData = iData;
        ceilData = iData + 1;
    }else if(iData > fData){
        floorData = iData - 1;
        ceilData = iData;
    }else{
        floorData = iData;
        ceilData = iData;
    }
    
    std::cout << floorData << " " << ceilData << std::endl;

    return 0;
}