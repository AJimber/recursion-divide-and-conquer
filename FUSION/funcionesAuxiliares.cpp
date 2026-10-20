#include "funcionesAuxiliares.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>



void rellenarVector(std::vector<int> &v)
{
    for(size_t i = 0; i < v.size(); i++)
    {
        v[i] = rand() % 9999999;
    }
}



void guardarTiemposRealesFichero(std::vector<int> numeroElementos, std::vector<double> tiemposReal, std::string nombreFichero)
{
    std::ofstream fichero(nombreFichero);

    if(!fichero.is_open())
    {
        std::cout << "Error al abrir el fichero." << std::endl;
        return;
    }

    for (size_t i = 0; i < numeroElementos.size() && i < tiemposReal.size(); i++)
    {
        fichero << numeroElementos[i] << " " << tiemposReal[i] << std::endl;
    }
    fichero.close();
}