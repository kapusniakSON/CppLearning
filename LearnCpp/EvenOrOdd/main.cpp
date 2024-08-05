#include <iostream>

int getInt()
{
    std::cout << "Enter a integer: ";
    int x{};
    std::cin >> x;

    return x;
}

void printOddOrEven(int x)
{
    int y{x};
    y %= 2;

    y == 0 ? std::cout << x << " is even.\n" : std::cout << x << " is odd\n";
}

int main()
{
    int x{getInt()};

    printOddOrEven(x);

    return 0;
}
