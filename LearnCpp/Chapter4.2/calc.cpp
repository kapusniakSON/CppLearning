#include "calc.h"
#include <iostream>

double getDouble() {
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;

    return x;
}

char getMathOperator() {

    std::cout << "Enter +, -, *, or /: ";
    char operation{};
    std::cin >> operation;

    return operation;
}

void printMathOperation(double x, double y, char mathOperator) {

    if (mathOperator == '+') {
        std::cout << x << ' ' << mathOperator << ' ' << y << " is " << x + y << '\n';
    } else if (mathOperator == '-') {
        std::cout << x << ' ' << mathOperator << ' ' << y << " is " << x - y << '\n';
    } else if (mathOperator == '*') {
        std::cout << x << ' ' << mathOperator << ' ' << y << " is " << x * y << '\n';
    } else if (mathOperator == '/') {
        std::cout << x << ' ' << mathOperator << ' ' << y << " is " << x / y << '\n';
    }
}
