#include <vector>
#include <iostream>
#include <limits>

#include "ordenacion.hpp"
#include "funcionesAuxiliares.hpp"
#include "ClaseTiempo.cpp"


void fusionar(std::vector<int> vIzquierdo, std::vector<int> vDerecho, std::vector<int> &vectorFusionado) 
{	
	size_t i = 0, j = 0;

	while(i < vIzquierdo.size() && j < vDerecho.size())
	{
		if(vIzquierdo[i] <= vDerecho[j])
		{
			vectorFusionado.push_back(vIzquierdo[i]);
			i++;
		}
		else
		{
			vectorFusionado.push_back(vDerecho[j]);
			j++;
		}
	}

	while(i < vIzquierdo.size())
	{
		vectorFusionado.push_back(vIzquierdo[i]);
		i++;
	}
	while(j < vDerecho.size())
	{
		vectorFusionado.push_back(vDerecho[j]);
		j++;
	}
}

void ordenarFusion(std::vector<int> &v,int nInsercion) 
{
	if(v.size() <= static_cast<size_t>(nInsercion))
	{
		ordenacionInsercion(v);
		return;
	}

	int pivote = v.size() / 2;

	std::vector<int> vIzquierdo (v.begin(), v.begin() + pivote);
	std::vector<int> vDerecho (v.begin() + pivote, v.end());

	ordenarFusion(vIzquierdo, nInsercion);
	ordenarFusion(vDerecho, nInsercion);

	v.clear();
	fusionar(vIzquierdo, vDerecho, v);
}

void ordenacionInsercion (std::vector<int> &v) 
{
	v.insert(v.begin(),0); //Creamos un centinela

    for (int i = 2; i < static_cast<int>(v.size()); i++)
    {
        v[0] = v[i];
        int j = i - 1;
        while (v[j] > v[0])
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = v[0];
    }

	v.erase(v.begin()); //Eliminamos centinela
}


void tiemposOrdenacionFusion(int n, int nMin, int nMax, int incremento, std::vector <double> &tiemposReales, std::vector <int> &numeroElementos)
{
	std::vector<int> v(n);
	rellenarVector(v);

	tiemposReales.clear();
	numeroElementos.clear();

	for(int i = nMin; i <= nMax; i += incremento)
	{
		std::vector<int> aux = v;

		Clock reloj;
		reloj.start();

		ordenarFusion(aux, i);

		reloj.stop();

		double tiempo = reloj.elapsed();

		tiemposReales.push_back(tiempo);
		numeroElementos.push_back(i);
		std::cout << "Número de insercciones: " << i
			<< " -> Tiempo: " << tiempo << " microsegundos"
			<< std::endl;
	}
}
