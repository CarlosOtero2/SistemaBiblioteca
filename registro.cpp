/**
 * @file registro.cpp
 * @brief Implementación de la clase Biblioteca y su menú de interacción.
 *
 * Este archivo contiene la implementación de la clase Biblioteca, que gestiona
 * el registro y búsqueda de libros y usuarios. Además, incluye un menú interactivo
 * para permitir al usuario interactuar con estas funcionalidades.
 *
 * @dependencies:
 * - STL (`vector`, `string`) y `iostream`.
 */

#include "biblioteca.h"
#include "utils.h"
#include <iostream>

using namespace std;

void mostrarMenuRegistro(Biblioteca& biblioteca) {
    int opcion;
    do {
        system("cls");
        imprimirLinea('=', 60);
        imprimirCentrado("MENÚ DE REGISTRO", 60);
        imprimirLinea('=', 60);
        cout << endl;
        
        cout << "    1. Registrar nuevo libro" << endl;
        cout << "    2. Registrar nuevo usuario" << endl;
        cout << "    3. Volver al menú principal" << endl;
        
        cout << endl;
        imprimirLinea('-', 60);
        cout << "    Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                biblioteca.registrarLibro();
                break;
            case 2:
                biblioteca.registrarUsuario();
                break;
            case 3:
                cout << "Volviendo al menú principal...\n";
                break;
            default:
                cout << "Opción inválida. Por favor, intente de nuevo.\n";
        }
    } while (opcion != 3);
}