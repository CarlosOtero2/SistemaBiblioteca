/**
 * @file biblioteca.cpp
 * @brief Implementación de la clase Biblioteca.
 *
 * Este archivo contiene las implementaciones de la clase Biblioteca, que
 * incluye las funcionalidades para mostrar libros y usuarios, y gestionar
 * los préstamos y devoluciones en el sistema de biblioteca.
 *
 * @dependencies:
 * - biblioteca.h: Declaraciones de la clase Biblioteca.
 * - utils.h: Funciones de utilidad para imprimir línea decorativa y centrar texto.
 */

#include "biblioteca.h"
#include "utils.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Biblioteca::Biblioteca() {
    // Libros
    Libro libro1 = {"Cien años de soledad", "Gabriel García Márquez"};
    Libro libro2 = {"Don Quijote de la Mancha", "Miguel de Cervantes"};
    Libro libro3 = {"El Principito", "Antoine de Saint-Exupéry"};
    
    libros.push_back(libro1);
    libros.push_back(libro2);
    libros.push_back(libro3);

    // Usuarios
    Usuario usuario1 = {"Juan Pérez", 1};
    Usuario usuario2 = {"María López", 2};
    Usuario usuario3 = {"Carlos García", 3};
    
    usuarios.push_back(usuario1);
    usuarios.push_back(usuario2);
    usuarios.push_back(usuario3);
}

void Biblioteca::registrarLibro() {
    system("cls");  // Limpiar pantalla
    imprimirLinea('=', 60);
    imprimirCentrado("REGISTRO DE NUEVO LIBRO", 60);
    imprimirLinea('=', 60);
    cout << endl;

    Libro nuevoLibro;
    cout << "    Ingrese el título del libro: ";
    cin.ignore();
    getline(cin, nuevoLibro.titulo);
    cout << "    Ingrese el autor del libro: ";
    getline(cin, nuevoLibro.autor);

    libros.push_back(nuevoLibro);

    cout << endl;
    imprimirLinea('-', 60);
    cout << "    Libro registrado con éxito." << endl;
    imprimirLinea('-', 60);
    cout << endl;
    system("pause");
}

void Biblioteca::registrarUsuario() {
    system("cls");
    imprimirLinea('=', 60);
    imprimirCentrado("REGISTRO DE NUEVO USUARIO", 60);
    imprimirLinea('=', 60);
    cout << endl;

    Usuario nuevoUsuario;
    cout << "    Ingrese el nombre del usuario: ";
    cin.ignore();
    getline(cin, nuevoUsuario.nombre);
    cout << "    Ingrese el ID del usuario: ";
    cin >> nuevoUsuario.id;

    usuarios.push_back(nuevoUsuario);

    cout << endl;
    imprimirLinea('-', 60);
    cout << "    Usuario registrado con éxito." << endl;
    imprimirLinea('-', 60);
    cout << endl;
    system("pause");
}

void Biblioteca::buscarLibro() {
    system("cls");
    imprimirLinea('=', 60);
    imprimirCentrado("BÚSQUEDA DE LIBRO", 60);
    imprimirLinea('=', 60);
    cout << endl;

    string tituloBuscado;
    cout << "    Ingrese el título del libro a buscar: ";
    cin.ignore();
    getline(cin, tituloBuscado);
    
    cout << endl;
    imprimirLinea('-', 60);
    bool encontrado = false;
    for (const auto& libro : libros) {
        if (libro.titulo == tituloBuscado) {
            cout << "    Libro encontrado:" << endl;
            cout << "    Título: " << libro.titulo << endl;
            cout << "    Autor:  " << libro.autor << endl;
            encontrado = true;
            break;
        }
    }
    
    if (!encontrado) {
        cout << "    Libro no encontrado." << endl;
    }
    
    imprimirLinea('-', 60);
    cout << endl;
    system("pause");
}

void Biblioteca::buscarUsuario() {
    system("cls");
    imprimirLinea('=', 60);
    imprimirCentrado("BÚSQUEDA DE USUARIO", 60);
    imprimirLinea('=', 60);
    cout << endl;

    int idBuscado;
    cout << "    Ingrese el ID del usuario a buscar: ";
    cin >> idBuscado;

    cout << endl;
    imprimirLinea('-', 60);
    bool encontrado = false;
    for (const auto& usuario : usuarios) {
        if (usuario.id == idBuscado) {
            cout << "    Usuario encontrado:" << endl;
            cout << "    Nombre: " << usuario.nombre << endl;
            cout << "    ID:     " << usuario.id << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "    Usuario no encontrado." << endl;
    }

    imprimirLinea('-', 60);
    cout << endl;
    system("pause");
}

void Biblioteca::mostrarLibros() {
    system("cls");
    imprimirLinea('=', 60);
    imprimirCentrado("LISTA DE LIBROS", 60);
    imprimirLinea('=', 60);
    cout << endl;

    if (libros.empty()) {
        cout << "    No hay libros registrados." << endl;
    } else {
        for (const auto& libro : libros) {
            cout << "    Título: " << libro.titulo << endl;
            cout << "    Autor:  " << libro.autor << endl;
            cout << endl;
        }
    }

    imprimirLinea('-', 60);
    cout << "    Total de libros: " << libros.size() << endl;
    imprimirLinea('-', 60);
    cout << endl;
    system("pause");
}

void Biblioteca::mostrarUsuarios() {
    system("cls");
    imprimirLinea('=', 60);
    imprimirCentrado("LISTA DE USUARIOS", 60);
    imprimirLinea('=', 60);
    cout << endl;

    if (usuarios.empty()) {
        cout << "    No hay usuarios registrados." << endl;
    } else {
        for (const auto& usuario : usuarios) {
            cout << "    Nombre: " << usuario.nombre << endl;
            cout << "    ID:     " << usuario.id << endl;
            cout << endl;
        }
    }

    imprimirLinea('-', 60);
    cout << "    Total de usuarios: " << usuarios.size() << endl;
    imprimirLinea('-', 60);
    cout << endl;
    system("pause");
}

void Biblioteca::prestarLibro() {
    system("cls");
    imprimirLinea('=', 60);
    imprimirCentrado("PRÉSTAMO DE LIBRO", 60);
    imprimirLinea('=', 60);
    cout << endl;

    string tituloBuscado;
    int idUsuario;

    cout << "    Ingrese el título del libro a prestar: ";
    cin.ignore();
    getline(cin, tituloBuscado);
    cout << "    Ingrese el ID del usuario: ";
    cin >> idUsuario;

    cout << endl;
    imprimirLinea('-', 60);
    bool libroEncontrado = false;
    bool usuarioEncontrado = false;

    for (const auto& libro : libros) {
        if (libro.titulo == tituloBuscado) {
            libroEncontrado = true;
            for (const auto& usuario : usuarios) {
                if (usuario.id == idUsuario) {
                    usuarioEncontrado = true;
                    cout << "    Libro prestado exitosamente a " << usuario.nombre << endl;
                    break;
                }
            }
            break;
        }
    }

    if (!libroEncontrado) {
        cout << "    El libro no existe." << endl;
    } else if (!usuarioEncontrado) {
        cout << "    El usuario no existe." << endl;
    }

    imprimirLinea('-', 60);
    cout << endl;
    system("pause");
}

void Biblioteca::devolverLibro() {
    system("cls");
    imprimirLinea('=', 60);
    imprimirCentrado("DEVOLUCIÓN DE LIBRO", 60);
    imprimirLinea('=', 60);
    cout << endl;

    int idUsuario;
    cout << "    Ingrese el ID del usuario: ";
    cin >> idUsuario;

    cout << endl;
    imprimirLinea('-', 60);
    bool encontrado = false;

    for (const auto& usuario : usuarios) {
        if (usuario.id == idUsuario) {
            cout << "    Libro devuelto exitosamente por " << usuario.nombre << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "    El usuario no existe." << endl;
    }

    imprimirLinea('-', 60);
    cout << endl;
    system("pause");
}