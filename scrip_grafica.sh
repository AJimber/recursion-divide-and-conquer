#!/bin/bash

#OJO: adaptar las leyendas a los nombres de las variables. En el eje Y se miden tiempos y en el eje X es el tamaño del ejemplar.
cat << _end_ | gnuplot
set terminal postscript eps color
set output "grafico.eps"
set key right bottom
set xlabel "Tamano del ejemplar (n)"
set ylabel "Tiempo (microsegundos)"
plot 'datosFinales.txt' using 1:2 t "Tiempo real" , 'datosFinales.txt' using 1:3 t "Tiempo estimado" w l
_end_
