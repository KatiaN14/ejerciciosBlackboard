/*
Implemente un programa que permita rellenar a mano estructuras de datos (tipo struct) que
incluyan los siguientes campos:
• Nombre y apellidos.
• Fecha de nacimiento (dd:mm:aa).
• NIF.
• Número de teléfono.
• Número de matrícula.
• Grado en el que está matriculado.
Los campos de texto pueden modelarse como variables de tipo string o como cadenas de
caracteres. El tipo del resto de campos quedan a elección del alumno. (Pista para resolverlo: ver
final del documento “03-Punteros y structs”).
El programa debe poder visualizar los datos de dichas estructuras, campo a campo.
*/

#include <iostream>
#include <ctime>

using namespace std;

struct Fecha {
    int dd;
    int mm;
    int aa;
};
struct Alumno {
    string nom_apell;
    Fecha f_nacimiento;
    int nif;
    int tel;
    int matricula;
    string grado;
};

int calcularSecuenciaAleatoria(void)
{
    int numaleat;
    numaleat=rand()%9999;
    return numaleat;
}

int main()
{
    Fecha f1;
    Alumno a1;
    cout << "Introduzca el nombre y el apellido: " << endl; 
    cin >> a1.nom_apell;
    cin.ignore(1000, '\n');

    cout << "Introduzca el día de nacimiento: " << endl;
    cin >> f1.dd;
    cin.ignore(1000, '\n');
    cout << "Introduzca el mes de nacimiento: " << endl;
    cin >> f1.mm;
    cin.ignore(1000, '\n');
    cout << "Introduzca el año de nacimiento: " << endl;
    cin >> f1.aa;
    cin.ignore(1000, '\n');
    a1.f_nacimiento = f1;

    //otra opcion es ponerlo todo junto cin >> dd >> mm >> aa ...

    cout << "Introduzca el NIF: " << endl;
    cin >> a1.nif;
    cin.ignore(1000, '\n');
    cout << "Introduzca el telefono: " << endl;
    cin >> a1.tel;
    cin.ignore(1000, '\n');

    srand(time(NULL));
    int matr = calcularSecuenciaAleatoria();
    a1.matricula = matr;

    cout << "Introduzca el grado: " << endl;
    cin >> a1.grado;
    cin.ignore(1000, '\n');

    cout << "El alumno se llama " << a1.nom_apell << ", ha nacido el " << a1.f_nacimiento.dd << "/" << a1.f_nacimiento.mm << "/" << a1.f_nacimiento.aa << ", su numero de matricula es " << a1.matricula << " y estudia " << a1.grado << endl;

    return 0;
}