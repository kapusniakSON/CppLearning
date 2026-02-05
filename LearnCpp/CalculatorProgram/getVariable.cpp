#include <iostream>

double getDouble() {
    std::cout << "Enter a number: ";
    double x;
    std::cin >> x;
    return x;
}

char getMathSymbol() {
    std::cout << "What u want do choose between: +, -, * or /: ";
    char mathSymbol{};
    std::cin >> mathSymbol;

    if (mathSymbol == '+' || mathSymbol == '-' || mathSymbol == '*' || mathSymbol == '/') {
        return mathSymbol;
    } else {
        std::cout << "Wrong symbol, reset program\n";
        return 1;
    }
}
