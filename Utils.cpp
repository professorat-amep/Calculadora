#include "pch.h"
#include "Utils.h"
#include <cmath>
#include <stdexcept>

bool Utils::es_primer(int n) {
    bool res = true;

    if (n < 0) {
        throw std::invalid_argument("El nombre no pot ser negatiu");
    }
    // Els nombre menors o iguals a 1 no son primers
    if (n <= 1) res = false;

    // Comprovem si n és divisible per algún enter des de 2
    // fins la seva arrel quadrada
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) res = false;
    }

    return res;
}

