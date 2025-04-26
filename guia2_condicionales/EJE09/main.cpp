/*
PR1-GUIA2-EJ09.
Hacer un programa para ingresar tres números y listar el máximo de ellos.



******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir tres numeros y mostrar quien es el maximo

2- ANALISIS

    DE:
        - numero1, numero2, numero3

    DS:
        - maximo

    PROCESO:

        - si numero1 > numero2 entonces
            maximo = numero1
        sino
            maximo = numero2

        si numero3 > maximo
            maximo = numero3




3- ESTRATEGIA:(QUE?)

    - Pedir los numeros
    - Comparar los numeros, guardando el maximo en una variable maximo
    - mostrar el maximo


4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero1, numero2, numero3;
    int maximo;

    // - Pedir los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    cout << "Ingrese numero: ";
    cin >> numero3;

    // - Comparar los numeros, guardando el maximo en una variable maximo
    if(numero1 > numero2){
        maximo = numero1;
    }
    else{
        maximo = numero2;
    }

    if(numero3 > maximo){
        maximo = numero3;
    }

    // - mostrar el maximo
    cout << "---------------------------------------" << endl;
    cout << "El maximo de los numeros es: " << maximo << endl;

    system("pause");
    return 0;
}
