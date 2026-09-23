#include "heightCalc.h"
#include <iostream>

const double GRAVITY = 9.8;

double getTowerHeight() {
    std::cout << "Enter the height of the tower in meters: ";
    double x{};
    std::cin >> x;

    return x;
}

void calculateHeight(double startHeight, int timeAfterDrop) {
    double nowHeight{startHeight - (GRAVITY * (timeAfterDrop * timeAfterDrop) / 2)};
    if (nowHeight > 0) {
        std::cout << "At " << timeAfterDrop << " seconds, the ball is at height: " << nowHeight
                  << " meters\n";
    }

    else {
        std::cout << "At " << timeAfterDrop << " seconds, the ball is on the ground.\n";
    }
}
