/*
PR1-GUIA2-EJ01.
Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL.


******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir un numero y mostrar si es positivo, negativo o cero

2- ANALISIS

    DE:
        - numero

    DS:
        - cartel dice "positivo" , "negativo" o "cero"

    PROCESO:

        - preguntar
        si numero > 0 entoces
            mostrar es postivo
        sino
            si numero == 0 entonces
                mostrar es cero
            sino
                mostrar es negativo





3- ESTRATEGIA:(QUE?)

    - Pedir un numero
    - Preguntar si el numero es mayor, igual o menor a cero y mostrar un cartel

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero;

    // - Pedir un numero
    cout << "Ingrese numero: ";
    cin >> numero;

    cout << "-------------------------------------" << endl;

    // - Preguntar si el numero es mayor, igual o menor a cero y mostrar un cartel
    if(numero == 0){
        cout << "El numero " << numero << " es positivo" << endl;
    }
    else if(numero == 0){
        cout << "El numero " << numero << " es cero" << endl;
    }
    else{
        cout << "El numero " << numero << " es negativo" << endl;
    }

    system("pause");
    return 0;
}
