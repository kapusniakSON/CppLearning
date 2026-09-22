#include <iostream>

int readNumber() {
    std::cout << "Please enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x, int y) {
    std::cout << "The quotient is: " << static_cast<double>(x) / static_cast<double>(y) << '\n';
}

int main() {
    int x{readNumber()};
    int y{readNumber()};

    writeAnswer(x, y);

    return 0;
}
