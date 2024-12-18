#include "utils.h"

void imprimirLinea(char c, int longitud) {
    std::cout << std::setfill(c) << std::setw(longitud) << "" << std::setfill(' ') << std::endl;
}

void imprimirCentrado(const std::string& texto, int ancho) {
    int espacios = (ancho - texto.length()) / 2;
    std::cout << std::setw(espacios) << "" << texto << std::endl;
}
