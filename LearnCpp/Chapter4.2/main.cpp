#include "calc.h"

int main() {

    double x{getDouble()};
    double y{getDouble()};

    char mathOperator{getMathOperator()};

    printMathOperation(x, y, mathOperator);

    return 0;
}
