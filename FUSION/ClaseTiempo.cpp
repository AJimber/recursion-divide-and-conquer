#ifndef CLASE_TIEMPO_CPP
#define CLASE_TIEMPO_CPP

#include <cassert>
#include <ctime>
#include <cstdint>

/**
 * @brief Clase para medir tiempos de ejecución en microsegundos.
 */
class Clock
{
private:
    timespec _start{};
    timespec _stop{};
    bool _isStarted = false;

public:
    /**
     * @brief Constructor de la clase.
     */
    Clock() = default;

    /**
     * @brief Inicia el cronómetro.
     * @pre El cronómetro debe estar detenido.
     */
    void start()
    {
        assert(!isStarted());

        clock_gettime(CLOCK_REALTIME, &_start);
        _isStarted = true;
    }

    /**
     * @brief Reinicia el cronómetro.
     */
    void restart()
    {
        clock_gettime(CLOCK_REALTIME, &_start);
        _isStarted = true;
    }

    /**
     * @brief Detiene el cronómetro.
     * @pre El cronómetro debe estar iniciado.
     */
    void stop()
    {
        assert(isStarted());

        clock_gettime(CLOCK_REALTIME, &_stop);
        _isStarted = false;
    }

    /**
     * @brief Comprueba si el cronómetro está funcionando.
     * @return true si está iniciado, false en caso contrario.
     */
    bool isStarted() const
    {
        return _isStarted;
    }

    /**
     * @brief Obtiene el tiempo transcurrido en microsegundos.
     * @pre El cronómetro debe estar detenido.
     * @return Tiempo transcurrido en microsegundos.
     */
    uint64_t elapsed() const
    {
        assert(!isStarted());

        constexpr uint64_t MICROSECONDS = 1000000ULL;
        constexpr uint64_t NANOSECONDS = 1000ULL;

        const uint64_t startTime =
            static_cast<uint64_t>(_start.tv_sec) * MICROSECONDS +
            static_cast<uint64_t>(_start.tv_nsec) / NANOSECONDS;

        const uint64_t stopTime =
            static_cast<uint64_t>(_stop.tv_sec) * MICROSECONDS +
            static_cast<uint64_t>(_stop.tv_nsec) / NANOSECONDS;

        return stopTime - startTime;
    }
};

#endif