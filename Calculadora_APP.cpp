// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdexcept>
#include "Calculadora.h"
#include "Utils.h"

void mostrarMenu() {
    std::cout << "\n";
    std::cout << "----------------\n";
    std::cout << "Mini calculadora\n";
    std::cout << "----------------\n";
    std::cout << "1. Multiplicar\n";
    std::cout << "2. Dividir\n";
    std::cout << "4. Sortir\n";
    std::cout << "3. Nombres primers\n";
    std::cout << "4. Sortir\n";

}

void processarOpcio(int op)
{
    int a, b;
    Calculadora c;
    Utils u;

    switch (op)
    {
    case 1:
        std::cout << "Anem a multiplicar 2 nombres ...\n";
        std::cout << "Primer nombre: ";
        std::cin >> a;
        std::cout << "Segon nombre: ";
        std::cin >> b;
        std::cout << "Resultat: ";
        std::cout << c.multiplica(a,b) << "\n";
        break;
    case 2:
        std::cout << "Anem a dividir 2 nombres ...\n";
        std::cout << "Dividend: ";
        std::cin >> a;
        std::cout << "Divisor: ";
        std::cin >> b;
        std::cout << "Resultat: ";
        std::cout << c.divide(a, b) << "\n";
        break;
    case 3:
        std::cout << "Entra un nombre i miramem si es primer: ";
        std::cin >> a;
        try {
            if (u.es_primer(a))
                std::cout << "El " << a << " es un nombre primer" << "\n";
            else
                std::cout << "El " << a << " no es un nombre primer" << "\n";
        }
        catch (std::exception ex) {
            std::cout << "Error:: " << ex.what() << "\n";
        }
        break;
    default:
        break;
    }

}

int main()
{
    int opcio = 0;
    while (opcio != 4) {
        mostrarMenu();
        std::cout << "Que vols fer? ";
        std::cin >> opcio;
        processarOpcio(opcio);
    }
    std::cout << "Fins un altra!!\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
