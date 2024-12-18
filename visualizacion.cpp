/**
 * @file visualizacion.cpp
 * @brief Implementación de funciones para la visualización de libros.
 *
 * Este archivo contiene la implementación de funciones que permiten mostrar
 * información detallada de los libros registrados en el sistema de biblioteca.
 *
 * @dependencies:
 * - visualizacion.h: Declara la estructura `LibroVisualizacion` y las funciones relacionadas.
 */

#include <iostream>
#include "visualizacion.h"
#include <vector>
#include <string>

using namespace std;

// Función para mostrar todos los libros disponibles
void mostrarLibros(const vector<LibroVisualizacion>& libros) {
    cout << "Libros disponibles:" << endl;
    
    // Recorrer cada libro en el vector y mostrar sus detalles
    for (const auto& libro : libros) {
        cout << "- Titulo: " << libro.titulo << endl;
        cout << "  Autor: " << libro.autor << endl;
        cout << "  Año: " << libro.anio << endl;
        cout << "  Pais: " << libro.pais << endl;
        cout << "  Idioma: " << libro.idioma << endl;
        cout << endl;
    }
}
