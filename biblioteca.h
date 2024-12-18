/**
 * @file biblioteca.h
 * @brief Declaración de la clase Biblioteca y sus estructuras asociadas.
 *
 * Este archivo contiene las declaraciones de la clase Biblioteca y las estructuras
 * necesarias para el sistema de biblioteca. La clase proporciona funcionalidades
 * para registrar y buscar libros y usuarios.
 */

/**
 * @class Biblioteca
 * @brief Clase central del sistema de biblioteca.
 *
 * La clase Biblioteca encapsula las listas de libros y usuarios, 
 * y proporciona métodos para gestionar las operaciones principales 
 * del sistema, como mostrar libros, registrar préstamos y devoluciones.
 */

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <string>
#include <vector>

class Biblioteca {
private:
    struct Libro {
        std::string titulo;
        std::string autor;
    };

    struct Usuario {
        std::string nombre;
        int id;
    };

    std::vector<Libro> libros;
    std::vector<Usuario> usuarios;

public:
    // Constructor
    Biblioteca();

    // Métodos para registro
    void registrarLibro();
    void registrarUsuario();

    // Métodos para búsqueda
    void buscarLibro();
    void buscarUsuario();

    // Métodos para visualización
    void mostrarLibros();
    void mostrarUsuarios();

    // Métodos para préstamos
    void prestarLibro();
    void devolverLibro();
};

#endif // BIBLIOTECA_H