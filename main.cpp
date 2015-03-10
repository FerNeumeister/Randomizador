#include <iostream>
#include <fstream>
#include <typeinfo>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>
#include <time.h>




using namespace std;

int valor=0;
int desde=0;
int hasta=0;
int hora=time(NULL);

void Pregunta(int &desde, int &hasta){

    cout << "Bienvenido al RANDOMIZADOR"<< endl;
    cout << "Elija el nivel del RANDOMIZADOR"<< endl;
    cout << "Desde:"<< endl;
    cin >> desde;
    cout << "Hasta"<< endl;
    cin >> hasta;

}



void Randomizador(int &valor, int desde , int hasta){

    char respuesta='a';

    cout << "Empezar S/N"<< endl;
    cin >> respuesta;

    while ((respuesta=='S')||(respuesta=='s')){

        valor = rand () % (desde-hasta+1) + desde;
        cout << valor << endl;
        cout << "Otra vez S/N"<< endl;
        cin >> respuesta;
        valor = 0;
    }

}


int main()
{

    Pregunta(desde,hasta);
    Randomizador(valor,desde,hasta);

    return 0;
}
