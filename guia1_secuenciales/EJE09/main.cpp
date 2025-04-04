/*
PR1-GUIA1-EJ09.
Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuantas horas y minutos equivalen.

Ejemplo A: si se ingresan 380 minutos el programa mostrará por pantalla que equivalen a 6 horas y 20 minutos.
Ejemplo B: si se ingresan 720 minutos el programa mostrará por pantalla que equivalen a 12 horas y 0 minutos.
Ejemplo C: si se ingresan 50 minutos el programa mostrará por pantalla que equivalen a 0 horas y 50 minutos


*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - pedir la cantidad de minutos y mostrar a cuantas horas y minutos equivale

2- ANALISIS

    DE:
        - cantidadMinutos


    DS:
        - horas, minutos


    PROCESO:

        - restoMinutos = cantidadMinutos % 60
        - horas = (cantidadMinutos - restoMinutos) / 60



3- ESTRATEGIA:(QUE?)

        - Pedir la cantidad de minutos
        - Calcular el resto minutos y las horas
        - Mostrar la cantidad de horas y minutos

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int cantidadMinutos;
    int restoMinutos, horas;

    // Pedir la cantidad de minutos
    cout << "Ingrese la cantidad de minutos: ";
    cin >> cantidadMinutos;

    // Calcular el resto minutos y las horas
    restoMinutos = cantidadMinutos % 60;
    horas = (cantidadMinutos - restoMinutos) / 60;

    // Mostrar la cantidad de horas y minutos
    cout << "********************************" << endl;
    cout << "HORAS  : " << horas << endl;
    cout << "MINUTOS: " << restoMinutos << endl;


    return 0;
}
