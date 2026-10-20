# Recursion and Divide and Conquer

Práctica de Algorítmica desarrollada en C++ para la asignatura de tercer curso del Grado en Ingeniería Informática de la Universidad de Córdoba.

## Descripción

Esta práctica implementa algoritmos basados en recursividad y en la técnica Divide y Vencerás.

El objetivo es comprender el funcionamiento de estas estrategias algorítmicas y analizar su eficiencia mediante dos ejercicios:

- **Recorrido del caballo:** exploración recursiva de los posibles caminos de un caballo de ajedrez.
- **Ordenación por fusión:** implementación de Merge Sort combinada con ordenación por inserción y análisis de tiempos de ejecución.

## Funcionamiento

### 1. Recorrido del caballo (CABALLO)

El programa utiliza recursividad para calcular los posibles caminos que puede recorrer un caballo de ajedrez desde la primera hasta la última fila de un tablero de 8×8.

El caballo únicamente puede avanzar una o dos filas, sin retroceder.

El algoritmo realiza los siguientes pasos:

1. Establece las posiciones iniciales y la casilla de destino.
2. Explora recursivamente los movimientos permitidos.
3. Comprueba que cada movimiento permanece dentro del tablero.
4. Cuenta los caminos que alcanzan la casilla de destino.
5. Muestra el número de caminos encontrados.

El ejercicio contempla diferentes modalidades:

- **Recorrido 0:** calcula el número de caminos desde cualquier casilla de la primera fila hasta una casilla determinada de la última.
- **Recorrido 1:** obtiene y muestra todos los caminos desde cualquier casilla de la primera fila hasta una casilla determinada de la última.
- **Recorrido 2:** obtiene y muestra los caminos entre dos casillas determinadas de la primera y última fila.

### 2. Ordenación por fusión (FUSION)

El programa implementa el algoritmo Merge Sort utilizando la estrategia Divide y Vencerás.

El algoritmo realiza los siguientes pasos:

1. Genera un vector de elementos.
2. Divide recursivamente el vector en subvectores más pequeños.
3. Cuando los subvectores alcanzan un tamaño determinado, aplica ordenación por inserción.
4. Fusiona los subvectores ordenados hasta obtener el vector completo.
5. Mide los tiempos de ejecución para diferentes tamaños de subvector.

El objetivo es determinar el tamaño de subvector que permite obtener el menor tiempo de ejecución.

Para ello, se realizan pruebas con vectores de diferentes tamaños y umbrales de ordenación por inserción.

Los resultados se representan gráficamente para analizar el comportamiento del algoritmo y comparar su eficiencia.

## Requisitos

- C++
- CMake
- Compilador compatible con C++
- Gnuplot (para la representación gráfica de resultados)

## Compilación

Cada ejercicio se encuentra en su propio directorio y dispone de un archivo `CMakeLists.txt`.

### Recorrido del caballo

Desde el directorio `CABALLO`:

```bash
mkdir -p build
cd build
cmake ..
make
```

### Ordenación por fusión

Desde el directorio `FUSION`:

```bash
mkdir -p build
cd build
cmake ..
make
```

Los ejecutables se generarán en los directorios de compilación correspondientes, salvo que CMake configure otra ubicación.

## Estructura del proyecto

```text
recursion-divide-and-conquer/
├── CABALLO/
│   ├── CMakeLists.txt
│   ├── casilla.hpp
│   ├── funcionesMedioNivel.hpp
│   ├── funcionesRecorridoCaballo.hpp
│   └── ...
│
├── FUSION/
│   ├── CMakeLists.txt
│   ├── funcionesMedioNivel.hpp
│   ├── funcionesAuxiliares.hpp
│   ├── ordenacion.hpp
│   ├── ordenacion.cpp
│   └── ...
│
└── README.md
```

## Análisis de eficiencia

En el ejercicio de ordenación por fusión se estudia cómo influye el tamaño mínimo de los subvectores en el rendimiento del algoritmo.

Se realizan pruebas con:

- Vectores de entre 1 y 10 millones de elementos.
- Umbrales de ordenación por inserción entre 10 y 200 elementos.
- Incrementos de 10 elementos entre pruebas.

Los tiempos obtenidos permiten identificar el umbral que proporciona el mejor rendimiento y representar gráficamente los resultados.

## Tecnologías utilizadas

- **C++:** implementación de los algoritmos.
- **CMake:** configuración y compilación de los proyectos.
- **Gnuplot:** representación gráfica de los tiempos de ejecución.