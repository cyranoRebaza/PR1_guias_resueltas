/*
PR1-GUIA2-EJ10.
Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.



******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir cinco numeros y mostrar el maximo y el minimo

2- ANALISIS

    DE:
        - numero1, numero2, numero3, numero4, numero5

    DS:
        - maximo, minimo

    PROCESO:

        - si numero1 > numero2 entonces
            maximo = numero1
            minimo = numero2
        sino
            maximo = numero2
            minimo = numero1

        si numero3 > maximo
            maximo = numero3
        sino
            si numero3 < minimo entonces
                minimo = numero3

        si numero4 > maximo
            maximo = numero4
        sino
            si numero4 < minimo entonces
                minimo = numero4

        si numero5 > maximo
            maximo = numero5
        sino
            si numero5 < minimo entonces
                minimo = numero5




3- ESTRATEGIA:(QUE?)

    - Pedir los numeros
    - Comparar los numeros, guardando el maximo en una variable maximo y el minimo en una variable minimo
    - mostrar el maximo y el minimo


4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero1, numero2, numero3, numero4, numero5;
    int maximo, minimo;

    // - Pedir los numeros
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    cout << "Ingrese numero: ";
    cin >> numero3;

    cout << "Ingrese numero: ";
    cin >> numero4;

    cout << "Ingrese numero: ";
    cin >> numero5;


    // - Comparar los numeros, guardando el maximo en una variable maximo y el minimo en una variable minimo
    if(numero1 > numero2){
        maximo = numero1;
        minimo = numero2;
    }
    else{
        maximo = numero2;
        minimo = numero1;
    }

    if(numero3 > maximo){
        maximo = numero3;
    }
    else{
        if(numero3 < minimo){
            minimo = numero3;
        }
    }

    if(numero4 > maximo){
        maximo = numero4;
    }
    else{
        if(numero4 < minimo){
            minimo = numero4;
        }
    }

    if(numero5 > maximo){
        maximo = numero5;
    }
    else{
        if(numero5 < minimo){
            minimo = numero5;
        }
    }

    // - mostrar el maximo y el minimo
    cout << "-------------------------------------" << endl;
    cout << "El maximo de los numeros es: " << maximo << endl;
    cout << "El minimo de los numeros es: " << minimo << endl;

    system("pause");
    return 0;
}
