/*
Pruebe, ejecute y comprenda el siguiente programa de ejemplo que permite crear y visualizar
horas aleatorias en formato hh:mm:ss. Ejemplo: 9:45:23 o 14:52:34

#include <iostream>
#include <ctime>

using namespace std;

struct Hora
{
    int hh;
    int mm;
    int ss;
};

Hora hhAleat()
{
    Hora haleat;

    haleat.hh=rand()%24;
    haleat.mm=rand()%60;
    haleat.ss=rand()%60;

    return haleat;
}

int main()
{
    int i = 0;
    Hora h; //={17,34,45};

    srand(time(NULL));

    for (i=0; i<5; i++)
    {
        h=hhAleat();

        cout    << h.hh << ":"
                << h.mm << ":"
                << h.ss << endl;
        
        cout << endl << endl;
    }
}
*/