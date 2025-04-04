/*
PR1-GUIA1-EJ10.
Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos días y horas equivalen.

Ejemplo A: si se ingresan 26 horas el programa mostrará por pantalla que equivalen a 1 día y 2 horas.
Ejemplo B: si se ingresan 72 horas el programa mostrará por pantalla que equivalen a 3 días y 0 horas.
Ejemplo C: si se ingresan 20 horas el programa mostrará por pantalla que equivalen a 0 días y 20 horas.


*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - pedir la cantidad de horas y mostrar a cuantos dias y  horas equivale

2- ANALISIS

    DE:
        - cantidadHoras


    DS:
        - dias, horas


    PROCESO:

        - restoHoras = cantidadHoras % 24
        - dias = (cantidadHoras - restoHoras) / 24



3- ESTRATEGIA:(QUE?)

        - Pedir la cantidad de horas
        - Calcular el resto horas y los dias
        - Mostrar la cantidad de dias y horas

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
       // Declarar las variables
       int cantidadHoras, restoHoras, dias;


       // Pedir la cantidad de horas
       cout << "Ingrese la cantidad de  horas: ";
       cin >> cantidadHoras;

       // Calcular el resto horas y los dias
       restoHoras = cantidadHoras % 24;
       dias = (cantidadHoras - restoHoras) / 24;

       // Mostrar la cantidad de dias y horas
       cout << "*********************************" << endl;
       cout << "DIAS : " << dias << endl;
       cout << "HORAS: " << restoHoras << endl;


    return 0;
}
