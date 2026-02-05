#include <iostream>

void nowHeight(double height, int second);

int main() {
    std::cout << "Enter a height: ";
    double height;
    std::cin >> height;

    nowHeight(height, 0);
    nowHeight(height, 1);
    nowHeight(height, 2);
    nowHeight(height, 3);
    nowHeight(height, 4);
    nowHeight(height, 5);

    return 0;
}
