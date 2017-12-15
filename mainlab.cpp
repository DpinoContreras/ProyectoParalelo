#include <iostream>
#include <vector>

#include "Laberinto.cpp"

using namespace std;

int main()
{
    unsigned int FIL, COL;
    cin >> FIL >> COL;

    Laberinto lab('+',' ','#',FIL,COL);
    //lab.printLab();
    lab.resolverLaberinto();
    lab.printLabResuelto();
    return 0;
}
