/*
PR1-GUIA1-EJ02.
Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas.
A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.

Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8,
pero luego debe quedar A=8 y B=3.

*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - Pedir dos numeros y mostrar ambas variables intercambiadas

2- ANALISIS

    DE:
        - numero1
        - numero2

    DS:
        - numero1
        - numero2

    PROCESO:

        - auxiliar = n1
        - numero1 = numero2
        - numero2 = auxiliar


3- ESTRATEGIA:(QUE?)

    - Pedir los dos numeros

    - Asignar el primer numero en una variable auxiliar
    - Asignar el segundo numero en la primera variable
    - Asignar en la segunda variable la varible auxiliar

    - Mostrar los numeros

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar las varibles
    int numero1, numero2;
    int auxiliar;
    // Pedir los numeros
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

     cout << "************antes**************" << endl;
    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    // usar variable auxiliar para realizar el intercambio de valor
    auxiliar = numero1;
    numero1 = numero2;
    numero2 = auxiliar;

    //mostrar los numeros
    cout << "************despues**************" << endl;
    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    return 0;
}
