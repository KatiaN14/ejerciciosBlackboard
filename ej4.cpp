/*
Basándose en el código anterior, implemente un programa que permita seleccionar
aleatoriamente códigos de vuelo de entre los siguientes y mostrarlos por pantalla: IBE3412,
ACA4832, RYR2781, MSR1032, UAL5389, AEA2334, KLM976
*/

#include <iostream>
#include <ctime>
using namespace std;
int calcularSecuenciaAleatoria(int x)
{
    int numaleat;
    numaleat = rand() % x;
    return numaleat;
}

int main()
{
    string vuelos[7] = {"IBE", "ACA", "RYR", "MSR", "UAL", "AEA", "KLM"};
    srand(time(NULL));

    int i = 0;
    for (i=1; i<10;i++)
    {
        int r = calcularSecuenciaAleatoria(7);
        string codigo = vuelos[r];

        int j = 0;

        for (j=1; j<5;j++)
        {
            int num = calcularSecuenciaAleatoria(9);
            string numero = to_string(num);
            codigo = codigo + numero;
        }
        cout << codigo;
        cout << endl;
    }
    return 0;
}