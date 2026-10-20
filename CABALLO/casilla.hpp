#ifndef CASILLA_H
#define CASILLA_H

#include <cassert>
#include <iostream>

using namespace std;

/**
 * @brief Clase que representa una casilla de un tablero de ajedrez.
 */
class Casilla
{
private:
    int _fila;
    int _columna;

public:
    // Constructor por defecto: posición (1, 1).
    Casilla() : _fila(1), _columna(1)
    {
    }

    // Constructor con coordenadas.
    Casilla(int fila, int columna)
    {
        assert(fila > 0 && fila < 9);
        assert(columna > 0 && columna < 9);

        _fila = fila;
        _columna = columna;
    }

    // Destructor.
    ~Casilla()
    {
    }

    // Devuelve la fila de la casilla.
    inline int fila() const
    {
        return _fila;
    }

    // Devuelve la columna de la casilla.
    inline int columna() const
    {
        return _columna;
    }

    // Modifica la fila.
    inline void fila(const int &nuevaFila)
    {
        _fila = nuevaFila;
    }

    // Modifica la columna.
    inline void columna(const int &nuevaColumna)
    {
        _columna = nuevaColumna;
    }

    // Muestra las coordenadas de la casilla.
    inline void mostrarCasilla()
    {
        cout << "(" << _fila << ", " << _columna << ") ";
    }
};

#endif