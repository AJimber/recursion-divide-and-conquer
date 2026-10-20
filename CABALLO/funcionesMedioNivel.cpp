#include "funcionesMedioNivel.hpp"
#include "funcionesRecorridoCaballo.hpp"

#include <iostream>
#include <vector>



void recorridoCaballo0()
{
    int columna;
    int caminos = 0;

    std::cout << "Introduzca la columna de destino (1-8): ";
    std::cin >> columna;

    while(columna < 1 || columna > 8)
    {
        std::cout << "Columna no valida. Introduzca otra (1-8): ";
        std::cin >> columna;
    }

    Caballo0(8, columna, caminos);
    std::cout << "Hay: " << caminos << " soluciones" << std::endl;
}


void recorridoCaballo1()
{
    int columna;

    std::vector<Casilla> solucion;
    std::vector<std::vector<Casilla>> soluciones;

    std::cout << "Introduzca la columna de destino (1-8): ";
    std::cin >> columna;

    while(columna < 1 || columna > 8)
    {
        std::cout << "Columna no valida. Introduzca otra (1-8): ";
        std::cin >> columna;
    }

    Caballo1(8, columna, solucion, soluciones);
    mostrarSoluciones(soluciones);
}


void recorridoCaballo2()
{
    int columnaOrigen, columnaDestino;

    std::vector<Casilla> solucion;
    std::vector<std::vector<Casilla>> soluciones;


    std::cout << "Introduzca la columna de origen (1-8): ";
    std::cin >> columnaOrigen;

    while(columnaOrigen < 1 || columnaOrigen > 8)
    {
        std::cout << "Columna no valida. Introduzca otra (1-8): ";
        std::cin >> columnaOrigen;
    }

    std::cout << "Introduzca la columna de destino (1-8): ";
    std::cin >> columnaDestino;

    while(columnaDestino < 1 || columnaDestino > 8)
    {
        std::cout << "Columna no valida. Introduzca otra (1-8): ";
        std::cin >> columnaDestino;
    }

    Caballo2(8, columnaDestino, columnaOrigen, solucion, soluciones);
    mostrarSoluciones(soluciones);
}


