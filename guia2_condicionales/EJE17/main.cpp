/*
PR1-GUIA2-EJ17.
Hacer un programa para ingresar por teclado cuatro números. Si los valores que se ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
Ejemplo A: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados.
Ejemplo B: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados.
Ejemplo C: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.

******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir cuatro numeros, si se ingresan de forma creciente mostrar estan ordenados sino estan desordenados

2- ANALISIS

    DE:
        - numero1, numero2, numero3, numero4

    DS:
        - cartel "conjunto ordenado" o "conjunto desordenado"

    PROCESO:
        - preguntamos
        si numero1 < numero2 y numero2 < numero3 y numero3 < numero4 entonces
            muestro "conjunto ordenado"
        sino
            muestro "conjunto desordenado"


3- ESTRATEGIA:(QUE?)

    - Pedir los numeros
    - Pregunto ingreso de numeros de forma creciente

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero1, numero2, numero3, numero4;

    // - Pedir los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    cout << "Ingrese numero: ";
    cin >> numero3;

    cout << "Ingrese numero: ";
    cin >> numero4;

    // - Pregunto ingreso de numeros de forma creciente
    if((numero1 < numero2) && (numero2 < numero3) && (numero3 < numero4)){
        cout << "Conjunto ordenado" << endl;
    }
    else{
        cout << "Conjunto desordenado" << endl;
    }


    system("pause");
    return 0;
}
