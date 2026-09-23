#include "heightCalc.h"

int main(){

    double towerHeight{getTowerHeight()};

    calculateHeight(towerHeight, 0);
    calculateHeight(towerHeight, 1);
    calculateHeight(towerHeight, 2);
    calculateHeight(towerHeight, 3);
    calculateHeight(towerHeight, 4);
    calculateHeight(towerHeight, 5);

    return 0;
}
