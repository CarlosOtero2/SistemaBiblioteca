/**
 * @file main.cpp
 * @brief Punto de entrada del programa de inventario de biblioteca.
 *
 * Este archivo implementa el menú principal del sistema y coordina
 * las funciones principales como mostrar libros, gestionar usuarios,
 * y realizar préstamos y devoluciones. Utiliza la clase `Biblioteca`
 * como núcleo del sistema.
 *
 * @dependencies:
 * - biblioteca.h
 * - utils.h
 */

#include "biblioteca.h"
#include "utils.h"
#include <iostream>
#include <windows.h>

using namespace std;

void mostrarMenuPrincipal() {
    system("cls");
    imprimirLinea('=', 60);
    imprimirCentrado("SISTEMA DE BIBLIOTECA", 60);
    imprimirLinea('=', 60);
    cout << endl;
    
    cout << "    1. Registrar nuevo libro" << endl;
    cout << "    2. Registrar nuevo usuario" << endl;
    cout << "    3. Buscar libro" << endl;
    cout << "    4. Buscar usuario" << endl;
    cout << "    5. Mostrar todos los libros" << endl;
    cout << "    6. Mostrar todos los usuarios" << endl;
    cout << "    7. Prestar libro" << endl;
    cout << "    8. Devolver libro" << endl;
    cout << "    9. Salir" << endl;
    
    cout << endl;
    imprimirLinea('-', 60);
    cout << "    Seleccione una opción: ";
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Biblioteca biblioteca;
    int opcion;

    do {
        mostrarMenuPrincipal();
        cin >> opcion;

        switch (opcion) {
            case 1:
                biblioteca.registrarLibro();
                break;
            case 2:
                biblioteca.registrarUsuario();
                break;
            case 3:
                biblioteca.buscarLibro();
                break;
            case 4:
                biblioteca.buscarUsuario();
                break;
            case 5:
                biblioteca.mostrarLibros();
                break;
            case 6:
                biblioteca.mostrarUsuarios();
                break;
            case 7:
                biblioteca.prestarLibro();
                break;
            case 8:
                biblioteca.devolverLibro();
                break;
            case 9:
                system("cls");
                imprimirLinea('=', 60);
                imprimirCentrado("¡GRACIAS POR USAR EL SISTEMA!", 60);
                imprimirLinea('=', 60);
                cout << endl;
                break;
            default:
                cout << endl;
                imprimirLinea('-', 60);
                cout << "    ✗ Opción no válida. Intente de nuevo." << endl;
                imprimirLinea('-', 60);
                cout << endl;
                system("pause");
        }
    } while (opcion != 9);

    return 0;
}