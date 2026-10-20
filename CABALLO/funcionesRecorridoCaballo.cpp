#include "funcionesRecorridoCaballo.hpp"




void Caballo0(int fila, int columna, int &caminos)
{
    // Comprobar límites del tablero
    if(fila < 1 || fila > 8 || columna < 1 || columna > 8)
        return;

    // Caso base
    if(fila == 1)
    {
        caminos++;
        return;
    }

    // Explorar los cuatro movimientos posibles
    Caballo0(fila - 1, columna - 2, caminos);
    Caballo0(fila - 1, columna + 2, caminos);
    Caballo0(fila - 2, columna - 1, caminos);
    Caballo0(fila - 2, columna + 1, caminos);
}

void Caballo1(int fila, int columna, vector <Casilla> solucion, vector < vector <Casilla> > &soluciones)
{
    // Comprobar límites del tablero
    if(fila < 1 || fila > 8 || columna < 1 || columna > 8)
        return;
    
    // Añadir la casilla actual al recorrido
    solucion.push_back(Casilla(fila, columna));

    // Caso base
    if(fila == 1)
    {
        soluciones.push_back(solucion);
        return;
    }

    // Posibles movimientos
    Caballo1(fila - 1, columna - 2, solucion, soluciones);
    Caballo1(fila - 1, columna + 2, solucion, soluciones);
    Caballo1(fila - 2, columna - 1, solucion, soluciones);
    Caballo1(fila - 2, columna + 1, solucion, soluciones);       
}

void Caballo2(int fila, int columnaDestino, int columnaOrigen, vector<Casilla> solucion, vector<vector<Casilla>> &soluciones)
{
    // Comprobar límites del tablero
    if(fila < 1 || fila > 8 || columnaDestino < 1 || columnaDestino > 8)
        return;

    // Añadir la casilla actual
    solucion.push_back(Casilla(fila, columnaDestino));

    // Caso base
    if(fila == 1)
    {
        if(columnaDestino == columnaOrigen)
        {
            soluciones.push_back(solucion);
        }
        return;
    }

    // Posibles movimientos
    Caballo2(fila - 1, columnaDestino - 2, columnaOrigen, solucion, soluciones);
    Caballo2(fila - 1, columnaDestino + 2, columnaOrigen, solucion, soluciones);
    Caballo2(fila - 2, columnaDestino - 1, columnaOrigen, solucion, soluciones);
    Caballo2(fila - 2, columnaDestino + 1, columnaOrigen, solucion, soluciones);
}

void mostrarSolucion(vector <Casilla> solucion)
{
    for(int i = solucion.size() - 1; i >= 0; i--)
    {
        solucion[i].mostrarCasilla();

        if(i > 0)
            std::cout << " -> ";
    }

    std::cout << std::endl;
}

void mostrarSoluciones(vector <vector <Casilla>> soluciones)
{
    for(size_t i = 0; i < soluciones.size(); i++)
    {
        std::cout << "Camino " << i + 1 << ": ";
        mostrarSolucion(soluciones[i]);
    }

    std::cout << "Hay: " << soluciones.size() << " soluciones" << std::endl;
}


