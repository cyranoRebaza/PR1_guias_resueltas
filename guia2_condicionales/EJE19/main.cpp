/*
PR1-GUIA2-EJ19.
Este ejercicio lo resolverán en la parte de código de la materia.
El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita:

Nombre	Tipo	Valor hora
C/C++	'C' 	$ 7500
C#	    '#'     $ 6100
Python	'P' 	$ 5400
Go	    'G'	    $ 5000

Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool)







******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir la cantidad de horas el tipo de lenguaje y si es urgente o no, luego calcular el costo de proyecto

2- ANALISIS

    DE:
        - cantidadHoras, tipoLenguaje, urgente

    DS:
        - costoTotal

    PROCESO:

        - valorHora_cpp = 7500
        - valorHora_Csharp = 6100
        - valorHora_python = 5400
        - valorHora_go = 5000

        costoTotal = cantidadHoras * precioLenguaje

        si es urgente --> costoTotal = costoTotal * 2.2


3- ESTRATEGIA:(QUE?)

    - Pedir los datos
    - Preguntar por el tipo de lenguaje y calcular su precio
    - Calcular el costo total
    - Preguntar si es o no urgente para incrementar el costo total en un 120%
    - Mostrar el costo total

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int cantidadHoras;
    char tipoLenguaje;
    bool esUrgente;

    float precioLenguaje;
    float costoTotal;

    const float HORA_CPP = 7500;
    const float HORA_CSHARP = 6100;
    const float HORA_PYTHON = 5400;
    const float HORA_GO = 5000;

    // - Pedir los datos
    cout << "Ingrese la cantidad horas-------------------------------------: ";
    cin >> cantidadHoras;

    cout << "Ingrese el lenguaje (C - C++ | # - C# | P - Python | G - Go)--: ";
    cin >> tipoLenguaje;

    cout << "Ingrese si es o no urgente (1 - urgente | 0 - NO urgente)-----: ";
    cin >> esUrgente;

    // - Preguntar por el tipo de lenguaje y calcular su precio
    switch(tipoLenguaje){
    case 'C':
    case 'c':
        precioLenguaje = HORA_CPP;
        break;

    case '#':
        precioLenguaje = HORA_CSHARP;
        break;

    case 'P':
    case 'p':
        precioLenguaje = HORA_PYTHON;
        break;

    case 'G':
    case 'g':
        precioLenguaje = HORA_GO;
        break;



    }

    // - Calcular el costo total
    costoTotal = cantidadHoras * precioLenguaje;

    // - Preguntar si es o no urgente para incrementar el costo total en un 120%
    if(esUrgente == 1){
        costoTotal = costoTotal * 2.2;
    }

    // - Mostrar el costo total
    cout << "El costo total es: $ " << costoTotal << endl;

    return 0;
}
