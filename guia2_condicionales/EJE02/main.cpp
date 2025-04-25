/*
PR1-GUIA2-EJ02.
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.


******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir dos numeros y mostrar si el primero es multiplo del segundo

2- ANALISIS

    DE:
        - numero1, numero2

    DS:
        - cartel dice "Es multiplo"

    PROCESO:

        - numero1 % numero2 == 0 entonces es multiplo



3- ESTRATEGIA:(QUE?)

    - Pedirlos numeros
    - Preguntar si el primero numero es multiplo de segundo, si es verdadero muestro cartel

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las varibles
    int numero1, numero2;

    // - Pedir los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    // - Preguntar si el primero numero es multiplo de segundo, si es verdadero muestro cartel
    if(numero1 % numero2){
        cout << "El numero " << numero1 << " es multiplo de " << numero2 << endl;
    }


    system("pause");
    return 0;
}
