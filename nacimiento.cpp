#include <iostream>

int main(int argc, char **argv) {
    int edad;
    int anio_actual;
    std::cin >> edad;
    std::cin >> anio_actual;
    std::cout << "Naciste en el "<< (anio_actual-edad) << ".";
    return 0;
}