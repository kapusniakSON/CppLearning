#include "io.h"

#include <iostream>

int readNumber() {
    std::cout << "Enter number: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int sum) {
    std::cout << "The sum these two numbers is: " << sum << ".\n";
}
