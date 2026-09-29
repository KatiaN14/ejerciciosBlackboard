/*
Implemente un programa que permita rellenar de forma aleatoria estructuras como la del
ejercicio anterior
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

int calcularSecuenciaAleatoria(int x)
{
    int numaleat;
    numaleat = rand() % x;

    return numaleat;
}

string generarGrado(void)
{
    string grados[3] = {"GII", "INFOADE", "GISI"};
    int x = calcularSecuenciaAleatoria(3);
    string grado = grados[x];

    return grado;
}

string generarNombre(void)
{
    string nombres[10] = {"Juan", "Migual", "Lucas", "Martín", "Álvaro", "Carolina", "Laura", "Lucía", "Anna", "Sofía"};
    string apellidos[10] = {"Gómez", "Pérez", "García", "Sanz", "Pastor", "Fernandez", "Delgado", "Pagán", "Sevilla", "Lorenz"};
    int x = calcularSecuenciaAleatoria(10);
    int y = calcularSecuenciaAleatoria(10);
    int z = calcularSecuenciaAleatoria(10);
    string grado = nombres[x] + " " + apellidos[y] + " " + apellidos[z];

    return grado;
}

Alumno generarAlumno(void)
{
    Fecha f1;
    Alumno a1;
    f1.dd = calcularSecuenciaAleatoria(29);
    f1.mm = calcularSecuenciaAleatoria(12);
    f1.aa = calcularSecuenciaAleatoria(18) + 1990;
    a1.f_nacimiento = f1;
    a1.nif = calcularSecuenciaAleatoria(99999999);
    a1.matricula = calcularSecuenciaAleatoria(10000);
    a1.tel = calcularSecuenciaAleatoria(999999999);
    a1.nom_apell = generarNombre();
    a1.grado = generarGrado();

    return a1;
}

int main()
{
    /*char c;
    bool test;
    cout << "Escribe un numero de varias cifras. Para terminar el programa pulsa ESC \n";
    do //para una única instrucción no hacen falta las llaves
        do
        {
            // c=getch(); => necesita #include <conio.h> que me está dando error, es para leer que tipo 
            test=((c>='0')&&(c<='9'));
        if(test) cout << c << " pulsado. \n";
        } while(test);
    while(c!=27);*/

    int c = 2;
    while (c != 0) {
        Alumno a1 = generarAlumno();
        cout << "El alumno se llama " << a1.nom_apell << ", ha nacido el " << a1.f_nacimiento.dd << "/" << a1.f_nacimiento.mm << "/" << a1.f_nacimiento.aa << ", su numero de matricula es " << a1.matricula << " y estudia " << a1.grado << endl;
        cout << "Pulse cualquier tecla para generar otro alumno o 0 para terminar el programa: " << endl;
        cin >> c;
        cin.ignore(1000, '\n');
    }
    return 0;
}