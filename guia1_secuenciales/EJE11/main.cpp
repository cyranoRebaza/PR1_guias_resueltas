/*
PR1-GUIA1-EJ11.
Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.
Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.


*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - pedir la cantidad de minutos y mostrar a cuantos dias, horas y minutos equivale

2- ANALISIS

    DE:
        - cantidadMinutos


    DS:
        - dias, horas, minutos


    PROCESO:

        - restoDia = cantidadMinutos % 1440
        - dias = (cantidadMinutos - restoDia) / 1440

        - restoHoras = restoDia % 60
        - horas = (restoDia - restoHora)/60


3- ESTRATEGIA:(QUE?)

        - Pedir la cantidad de minutos

        - Calcular el resto de dias y los dias
        - Calcular el resto de horas y las horas

        - Mostrar la cantidad de dias, horas y minutos

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
       // Declarar las variables
       int cantidadMinutos, restoDias, dias, restoHoras, horas;

       // Pedir la cantidad de minutos
       cout << "Ingrese la cantidad de minutos: ";
       cin >> cantidadMinutos;

       // Calcular el resto de dias y los dias
       restoDias = cantidadMinutos % 1440;
       dias = (cantidadMinutos - restoDias) / 1440;

       // Calcular el resto de horas y las horas
       restoHoras = restoDias % 60;
       horas = (restoDias - restoHoras) / 60;


       // Mostrar la cantidad de dias, horas y minutos
       cout << "*****************************" << endl;
       cout << "equivalen a: " << endl << endl;
       cout << dias << " dias" << endl;
       cout << horas << " horas" << endl;
       cout << restoHoras << " minutos" << endl;


    return 0;
}
