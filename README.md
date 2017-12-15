# ProyectoParalelo
Proyecto Paralelo Curso Computacion Paralela y Distribuida

Como compilar :

Compilar primero: ProbandoLibreria.cpp

g++ Probandolibreria.cpp -o ProbandoLibreria // crea txt de imagen bmp

Compilar segundo: mainlab.cpp

g++ mainlab.cpp -o mainlab


Como ejectuar:

Ejecutar ./ProbandoLibreria //creara un txt con 1 y 0 segun laberinto
Ejevutar ./mainlab <MazeEntradaSalida.txt >> Solucion.txt //Pinta el camino a la solucion posible



**Faltantes: 
+hacer que mainlab solo cree el txt con el camino pintado y no el laberinto nuevo
+Convertir .txt a .bmp haciendo que el camino pintado sea de color
+Paralelizar con OpenMP o MPI

Observaciones: Solo funciona hasta ahora para la imagen pequeña de 512 pixeles, violacion de segmento core para la imagen de 25600 pixeles
