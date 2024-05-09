#include "pch.h"
#include "Calculadora.h"
#include <cmath>
#include <stdexcept>


int Calculadora::multiplica(int a, int b) {
    int res = 0;
    bool esNegatiu = (a < 0 && b > 0) || (a > 0 && b < 0);

    a = abs(a); b = abs(b);
    for (int i = 0; i < b; ++i) {
        res += a;
    }
    if (esNegatiu) res = -res;

    return res;
}

float Calculadora::divide(int numerador, int denominador) {
    if (denominador == 0) {
        throw std::invalid_argument("¡Error! No se puede dividir por cero.");
    }
    return (float)numerador / (float)denominador;
}
