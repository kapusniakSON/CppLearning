// addition || subtraction || multiplication || division two numbers
double calculator(char symbol, double num1, double num2) {
    // addition (num1 + num2)
    if (symbol == 43) {
        double ans{num1 + num2};
        return ans;
    }
    // subtraction (num1 - num2)
    else if (symbol == 45) {
        double ans{num1 - num2};
        return ans;
    }
    // multiplication (num1 * num2)
    else if (symbol == 42) {
        double ans{num1 * num2};
        return ans;
    }
    // division (num1 / num2)
    else if (symbol == 47) {
        double ans{num1 / num2};
        return ans;
    }

    return '\0';
}
