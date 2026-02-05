#include <iostream>
#include <string>
#include <string_view>

std::string getString(int personNumber) {
    std::cout << "Enter the name of person #" << personNumber << ": ";
    std::string s{};
    std::getline(std::cin >> std::ws, s);
    return s;
}

int getInt(std::string_view person) {
    std::cout << "Enter the age of " << person << ": ";
    int x;
    std::cin >> x;
    return x;
}

void printWhoIsOlder(std::string_view person1, std::string_view person2, int age1, int age2) {
    std::cout << person1 << "(age " << age1 << ") is older than " << person2 << " (age " << age2
              << ").\n";
}
