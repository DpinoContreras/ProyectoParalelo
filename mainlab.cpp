#include <iostream>
#include <vector>
#include "/usr/include/mpich/mpi.h"
#include "Laberinto.cpp"

using namespace std;

int main()
{
    unsigned int FIL, COL;
    cin >> FIL >> COL;

    int id, numprocs;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
    MPI_Comm_rank(MPI_COMM_WORLD, &id);
// -------------------------------------------------------------------
    Laberinto lab('+',' ','#',FIL,COL);
    //lab.printLab();
    lab.resolverLaberinto();
    lab.printLabResuelto();
// -------------------------------------------------------------------
    MPI_Finalize();
    return 0;
}
