#include "funcionesMedioNivel.hpp"
#include "funcionesAuxiliares.hpp"
#include "ordenacion.hpp"
#include <vector>
#include <iostream>


void ordenacionFusion()
{
    srand((unsigned)time(0)); 
    int n, nMin, nMax, incremento;

    std::vector<double> tiemposReales;
    std::vector<int> numeroElementos;
    
    std::cout << "Introduzca el número de elementos del vector: "<<std::endl;
    std::cin >> n;

    while (n <= 0)
    {
        std::cout << "El numero de elementos debe ser mayor que 0: ";
        std::cin >> n;
    }

    std::cout << "Introduzca la cantidad minima de elementos: "<<std::endl;
    std::cin >> nMin;

    while (nMin <= 0)
    {
        std::cout << "La cantidad minima debe ser mayor que 0: ";
        std::cin >> nMin;
    }

    std::cout << "Introduzca la cantidad máxima de elementos: "<<std::endl;
    std::cin >> nMax; 

	while(nMax<nMin)
    {
        std::cout << "El termino maximo es menos que el minimo, introduzca otro valor para el termino maximo: ";
        std::cin >> nMax;
    }

    std::cout << "Introduzca el incremento: " << std::endl;
    std::cin >> incremento;

    while(incremento <= 0)
    {
        std::cout << "El incremento debe ser mayor que 0: ";
        std::cin >> incremento;
    }


    tiemposOrdenacionFusion(n, nMin, nMax, incremento, tiemposReales, numeroElementos);
    guardarTiemposRealesFichero(numeroElementos, tiemposReales, "datosFinales.txt");
}
