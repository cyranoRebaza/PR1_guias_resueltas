/*
PR1-GUIA2-EJ11.
Hacer un programa para ingresar cinco números y listar cuantos de esos cinco números son positivos, cuantos son negativos y cuantos son iguales a 0.


******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir cinco numero y mostrar cuantos son  positivo, negativo y ceros

2- ANALISIS

    DE:
        - numero1, numero2, numero3, numero4, numero5

    DS:
        - cantidadPositivos, cantidadNegativos, cantidadCeros

    PROCESO:

        - si numero1 > 0 entoces
            cantidadPositivos++
        sino
            si numero1 == 0 entonces
                cantidadCeros++
            sino
                cantidadNegativos

        - si numero2 > 0 entoces
            cantidadPositivos++
        sino
            si numero2 == 0 entonces
                cantidadCeros++
            sino
                cantidadNegativos

        - si numero3 > 0 entoces
            cantidadPositivos++
        sino
            si numero3 == 0 entonces
                cantidadCeros++
            sino
                cantidadNegativos

        - si numero4 > 0 entoces
            cantidadPositivos++
        sino
            si numero4 == 0 entonces
                cantidadCeros++
            sino
                cantidadNegativos

        - si numero5 > 0 entoces
            cantidadPositivos++
        sino
            si numero5 == 0 entonces
                cantidadCeros++
            sino
                cantidadNegativos





3- ESTRATEGIA:(QUE?)

    - Pedir los numeros
    - Preguntar por cada numero si es positivo, negativo o cero y lo cuento
    - Mostrar la cantidad de positivos negativos y ceros

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero1, numero2, numero3, numero4, numero5;
    int cantidadPositivos = 0;
    int cantidadNegativos = 0;
    int cantidadCeros = 0;

    // - Pedir los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    cout << "Ingrese numero: ";
    cin >> numero3;

    cout << "Ingrese numero: ";
    cin >> numero4;

    cout << "Ingrese numero: ";
    cin >> numero5;

    // - Preguntar por cada numero si es positivo, negativo o cero y lo cuento
    if(numero1 > 0){
        cantidadPositivos++;
    }
    else if(numero1 == 0){
        cantidadCeros++;
    }
    else{
        cantidadNegativos++;
    }

    if(numero2 > 0){
        cantidadPositivos++;
    }
    else if(numero2 == 0){
        cantidadCeros++;
    }
    else{
        cantidadNegativos++;
    }

    if(numero3 > 0){
        cantidadPositivos++;
    }
    else if(numero3 == 0){
        cantidadCeros++;
    }
    else{
        cantidadNegativos++;
    }

    if(numero4 > 0){
        cantidadPositivos++;
    }
    else if(numero4 == 0){
        cantidadCeros++;
    }
    else{
        cantidadNegativos++;
    }

    if(numero5 > 0){
        cantidadPositivos++;
    }
    else if(numero5 == 0){
        cantidadCeros++;
    }
    else{
        cantidadNegativos++;
    }

    // - Mostrar la cantidad de positivos negativos y ceros
    cout << "-----------------------------------------" << endl;
    cout << "La cantidad de positivos es:--- " << cantidadPositivos << endl;
    cout << "La cantidad de negativos es:--- " << cantidadNegativos << endl;
    cout << "La cantidad de ceros es:------- " << cantidadCeros << endl;

    system("pause");
    return 0;
}
