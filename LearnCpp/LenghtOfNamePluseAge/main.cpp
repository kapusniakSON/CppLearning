#include <iostream>
#include <string>

int main() {
    std::cout << "Enter your full name: ";
    std::string fullName{};
    std::getline(std::cin >> std::ws, fullName);

    std::cout << "enter your age: ";
    int age;
    std::cin >> age;

    // count a fullName length
    int lengthFullName{static_cast<int>(std::size(fullName))};

    std::cout << "Your age + length of name is: " << age + lengthFullName << '\n';

    return 0;
}
