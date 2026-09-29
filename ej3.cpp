/*
Pruebe, ejecute y comprenda el siguiente programa de ejemplo que permite generar secuencias
pseudoaleatorias desde 0 hasta 9999:

#include <iostream>
#include <ctime>

using namespace std;

int calcularSecuenciaAleatoria(void)
{
    int numaleat;
    numaleat=rand()%9999;
    return numaleat;
}

int main()
{
    int i = 0;
    srand(time(NULL));
    for (i=1;i<10;i++)
    {
        cout << "Secuencia aleatoria: " << i << endl;
        cout << calcularSecuenciaAleatoria();
        cout << endl << endl;
    }
    return 0;
}
*/