/*
PR1-GUIA2-EJ03.
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.


******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir un numero y mostrar si es impar o impar

2- ANALISIS

    DE:
        - numero

    DS:
        - cartel dice "Es par" o "Es impar"

    PROCESO:

        - numero % 2 == 0 --> preguntando si el resto es igual a cero



3- ESTRATEGIA:(QUE?)

    - Pedirlos numero
    - Preguntar si el numero es divisible por 2

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declaracion de variables
    int numero;

    // - Pedirlos numero
    cout << "Ingrese un numero: ";
    cin >> numero;

    // - Preguntar si el numero es divisible por 2
    if(numero % 2 == 0){
        cout << "Es par" << endl;
    }
    else{
        cout << "Es impar" << endl;
    }

    system("pause");
    return 0;
}
