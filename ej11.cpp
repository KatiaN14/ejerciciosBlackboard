/*
Ejecute y comprenda el siguiente programa que muestra el paso de argumentos por valor y por
referencia:

#include <iostream>

using namespace std;

int cuadPorValor(int);
void cuadPorRef(int&);

int main()
{
    int x=2,y=3,z=4;

    cout << "Paso de argumento por VALOR" << endl;
    cout << "Valor de x antes de la operacion: " << x << " Direccion de x: "
        << &x << endl;
    cout << "Llamamos a cuadPorValor(x)" << endl;
    y=cuadPorValor(x);
    cout << "Resultado y=x*x= " << y << " Direccion de y: " << &y << endl;
    cout << "Valor de x despues de la operacion: " << x << " Direccion de x: "
        << &x << endl << endl;

    cout << "Paso de argumento por REFERENCIA" << endl;
    cout << "Valor de z antes de la operacion: " << z << " Direccion de z: "
        << &z << endl;
    cout << "Llamamos a cuadPorRef(z)" << endl;
    cuadPorRef(z);
    cout << "Valor de z despues de la operacion: " << z << " Direccion de z: "
        << &z << endl;
    return 0;
}

int cuadPorValor(int a)
{
    int res;
    cout << "Valor de a: " << a << " Direccion de a: " << &a << endl;
    res=a*a;
    cout << "Valor de res: " << res << " Direccion de res: " << &res << endl;

    return res;
}

void cuadPorRef(int& c)
{
    cout << "Valor de c antes de la operacion: " << c << " Direccion dec: " << &c << endl;
    c=c*c;
    cout << "Valor de c despues de la operacion: " << c << " Direccion de c:" << &c << endl;
}
*/