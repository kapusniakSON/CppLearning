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

    switch (mathOperator) {
    case '+':
        std::cout << x << ' ' << mathOperator << ' ' << y << " is " << x + y << '\n';
        break;
    case '-':
        std::cout << x << ' ' << mathOperator << ' ' << y << " is " << x - y << '\n';
        break;
    case '*':
        std::cout << x << ' ' << mathOperator << ' ' << y << " is " << x * y << '\n';
        break;
    case '/': {
        if (y == 0) {
            std::cout << "Error: Division by zero!\n";
        } else {
            std::cout << x << ' ' << mathOperator << ' ' << y << " is " << x / y << '\n';
        }
    } break;

    default:
        std::cout << "Error: Invalid math operator!\n";
    }
}
