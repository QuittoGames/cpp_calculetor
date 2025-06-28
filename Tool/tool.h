#ifndef TOOL_H
#define TOOL_H
#include <stdexcept> // pra lançar erro se dividir por zero

class Tool {
public:
    static double sum(double n1, double n2) {
        return n1 + n2;
    }

    static double sub(double n1, double n2) {
        return n1 - n2;
    }

    static double mul(double n1, double n2) {
        return n1 * n2;
    }

    static double div(double n1, double n2) {
        if (n2 == 0) {
            throw std::invalid_argument("Divisão por zero não permitida!");
        }
        return n1 / n2;
    }
};

#endif
