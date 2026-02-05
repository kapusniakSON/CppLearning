#include <iostream>

void nowHeight(double height, int second) {
    constexpr double gravitation{9.8};
    double nowHeight{};

    nowHeight = height - gravitation * second * second / 2;

    if (nowHeight > 0) {
        std::cout << "At " << second << ", the ball is at height: " << nowHeight << " meters.\n";
    } else {
        std::cout << "At " << second << ", the ball is on the ground.\n";
    }
}
