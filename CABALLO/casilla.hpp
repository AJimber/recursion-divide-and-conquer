#ifndef CASILLA_H
#define CASILLA_H

#include <cassert>
#include <iostream>

/**
 * @brief Representa una posición dentro de un tablero de ajedrez de 8x8.
 */
class Casilla
{
private:
    int _fila;
    int _columna;

public:
    /**
     * @brief Constructor por defecto. Inicializa la casilla en (1, 1).
     */
    Casilla() : _fila(1), _columna(1) {}

    /**
     * @brief Constructor con coordenadas.
     * @param fila Fila de la casilla.
     * @param columna Columna de la casilla.
     */
    Casilla(int fila, int columna)
        : _fila(fila), _columna(columna)
    {
        assert(fila >= 1 && fila <= 8);
        assert(columna >= 1 && columna <= 8);
    }

    /**
     * @brief Destructor de la clase.
     */
    ~Casilla() = default;

    /**
     * @brief Devuelve la fila actual.
     */
    int fila() const
    {
        return _fila;
    }

    /**
     * @brief Devuelve la columna actual.
     */
    int columna() const
    {
        return _columna;
    }

    /**
     * @brief Modifica la fila.
     */
    void fila(const int &nuevaFila)
    {
        _fila = nuevaFila;
    }

    /**
     * @brief Modifica la columna.
     */
    void columna(const int &nuevaColumna)
    {
        _columna = nuevaColumna;
    }

    /**
     * @brief Muestra las coordenadas de la casilla.
     */
    void mostrarCasilla()
    {
        std::cout << "(" << _fila << ", " << _columna << ") ";
    }
};

#endif