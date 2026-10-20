#ifndef FUNCIONES_RECORRIDO_H
#define FUNCIONES_RECORRIDO_H

#include <vector>
#include "casilla.hpp"


void Caballo0(int fila, int columna, int &caminos);
    //fila: Fila a la que tiene que llegar el caballo desde la fila 1. Inicialmente valdrá 8
    //columna: Columna de la fila 8 a la que tiene que llegar el caballo.
    //caminos: Número total de caminos que puede recorrer el caballo

void Caballo1(int fila, int columna, vector <Casilla> solucion, vector < vector <Casilla> > &soluciones);
    //fila: Fila a la que tiene que llegar el caballo desde la fila 1. Inicialmente valdrá 8
    //columna: Columna de la fila 8 a la que tiene que llegar el caballo.
    //solución: camino parcial recorrido hasta ese momento.
    //soluciones: vector que contendrá todos los caminos posibles

void Caballo2(int fila, int columnaDestino, int columnaOrigen, vector<Casilla> solucion, vector<vector<Casilla>> &soluciones);
    //fila: Fila a la que tiene que llegar el caballo desde la fila 1. Inicialmente valdrá 8
    //columnaDestino: Columna de la fila 8 a la que tiene que llegar el caballo.
    //columnaOrigen: Columna de la fila 1 desde la que sale el caballo para llegar a la casilla definida por los dos parámetros anteriores
    //solución: camino parcial recorrido hasta ese momento.
    //soluciones: vector que contendrá todos los caminos posibles

void mostrarSolucion(vector <Casilla> solucion);
    //Muestra el camino almacenado en el vector solucion

void mostrarSoluciones(vector <vector <Casilla>> soluciones);
    //Muestra todos los caminos posibles almacenados en la vector de vectores soluciones.


#endif
