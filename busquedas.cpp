/**
 * @file busquedas.cpp
 * @brief Implementación de un sistema básico de búsqueda en una biblioteca.
 *
 * Este archivo contiene la implementación de la clase Biblioteca, que permite
 * buscar libros por título y usuarios por ID. También incluye un menú interactivo
 * para acceder a estas funcionalidades.
 *
 * @dependencies:
 * - STL (`vector`, `string`) y `iostream`.
 */

#include "biblioteca.h"
#include "utils.h"
#include <iostream>

using namespace std;

void mostrarMenuBusquedas(Biblioteca& biblioteca) {
    int opcion;
    do {
        system("cls");
        imprimirLinea('=', 60);
        imprimirCentrado("MENÚ DE BÚSQUEDAS", 60);
        imprimirLinea('=', 60);
        cout << endl;
        
        cout << "    1. Buscar libro" << endl;
        cout << "    2. Buscar usuario" << endl;
        cout << "    3. Volver al menú principal" << endl;
        
        cout << endl;
        imprimirLinea('-', 60);
        cout << "    Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                biblioteca.buscarLibro();
                break;
            case 2:
                biblioteca.buscarUsuario();
                break;
            case 3:
                cout << endl;
                imprimirLinea('-', 60);
                cout << "    Volviendo al menú principal..." << endl;
                imprimirLinea('-', 60);
                cout << endl;
                system("pause");
                break;
            default:
                cout << endl;
                imprimirLinea('-', 60);
                cout << "    Opción no válida. Intente de nuevo." << endl;
                imprimirLinea('-', 60);
                cout << endl;
                system("pause");
        }
    } while (opcion != 3);
}