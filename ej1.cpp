/*
La instrucción setw(n) permite establecer la anchura del campo en n unidades, lo que facilita
estructurar la información que se muestra por pantalla. Pruebe el siguiente programa que utiliza
dicha instrucción para alinear los números a la derecha de una columna de tres espacios:
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout    << "Texto sin formato" << endl;
    cout    << 6 << endl
            << 18 << endl
            << 124 << endl
            << "---\n"
            << (6+18+124) << endl << endl;
    cout    << "Texto con formato" << endl;
    cout    << setw(3) << 6 << endl
            << setw(3) << 18 << endl
            << setw(3) << 124 << endl
            << "---\n"
            << (6+18+124) << endl;
    return 0;
}
*/