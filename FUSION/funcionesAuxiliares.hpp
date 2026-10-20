#ifndef FUNCIONES_AUXILIARES_H
#define FUNCIONES_AUXILIARES_H

#include <vector>
#include <cstring>
#include <string>


//Función para rellenar aleatoriamente un vector de enteros
void rellenarVector(std::vector<int> &v);

//Función para almacenar en un fichero de texto el número de elementos del vector y el tiempo de ordenación
void guardarTiemposRealesFichero(std::vector<int> numeroElementos, std::vector<double> tiemposReal, std::string nombreFichero);

#endif
