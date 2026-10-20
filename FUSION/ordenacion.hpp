#ifndef ORDENACION_H
#define ORDENACION_H
#include <vector>


//Función para fusionar dos vectores
void fusionar(std::vector<int> vIzquierdo, std::vector<int> vDerecho, std::vector<int> &vectorFusionado);
    //vIzquierdo: subvector izquierdo que ya está ordenado
    //vDerecho: subvector derecho que ya está ordenado
    //vectorFusionado: vector obtenido al fusionar de forma ordenada los dos anteriores

//Función para ordenar un vector por el método de fusión.
void ordenarFusion(std::vector<int> &v,int nInsercion);
    //v: vector a ordenar
    //nInserción: Tamaño del vector a partir del cual se ordena por el método de inserción. 

//Función para ordenar un vector por le método de inserción que será invocada por la anterior.
void ordenacionInsercion (std::vector<int> &v);

//Función para medir los tiempos de las pruebas. Es similar a la que usasteis en la práctica1.
void tiemposOrdenacionFusion(int n, int nMin, int nMax, int incremento, std::vector <double> &tiemposReales, std::vector <int> &numeroElementos);
    //n: número de elementos del vector a ordenar.
    //nMin, nMax, incremento: Rango de valores del tamaño del subvector para ordenarlo por el método de inserción
    //tiemposReales: vector que almacenará los tiempos de ordenación para el rango anterior de valores del número de elementos de los subvectores.
    //numeroElementos: vector que guarda el rango de valores probados para ordenar los subvectores por el método de inserción.

#endif
