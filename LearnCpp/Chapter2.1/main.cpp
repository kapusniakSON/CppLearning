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

int main() {

    int num1{readNumber()};
    int num2{readNumber()};

    writeAnswer(num1 + num2);
    return 0;
}
