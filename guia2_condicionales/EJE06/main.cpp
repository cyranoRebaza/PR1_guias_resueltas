/*
PR1-GUIA2-EJ06.
Hacer un programa para ingresar por teclado tres números y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.
Tener en cuenta:  Si A es igual a B y B es igual a C, entonces A y C son iguales.


******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir tres numeros y mostrar si son iguales

2- ANALISIS

    DE:
        - numero1, numero2, numero3

    DS:
        - cartel "son iguales"

    PROCESO:

        - si numero1 == numero2 y numero1 == numero3 entonces
            muestro "son iguales"




3- ESTRATEGIA:(QUE?)

    - Pedir los tres numeros
    - comparar los tres numeros y mostrar si son iguales

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero1, numero2, numero3;

    // - Pedir los tres numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    cout << "Ingrese numero: ";
    cin >> numero3;

    // - comparar los tres numeros y mostrar si son iguales
    if((numero1 == numero2) && (numero1 == numero3)){
        cout << "Los numero ingresados son iguales" << endl;
    }


    system("pause");
    return 0;
}
