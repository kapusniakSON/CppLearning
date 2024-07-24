#include <iostream>

double calculator(char symbol, double num1, double num2);
double getDouble();
char getMathSymbol();

int main()
{
    double number1{getDouble()};

    char mathSymbol = getMathSymbol();
    if (mathSymbol == 1)
    {
        return 1;
    }

    double number2{getDouble()};
    double answer{calculator(mathSymbol, number1, number2)};

    std::cout << number1 << " " << mathSymbol << " " << number2 << " is "
              << answer << '\n';

    return 0;
}
