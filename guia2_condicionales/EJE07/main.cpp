/*
PR1-GUIA2-EJ07.
Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada.
Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.



******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir tres numeros y mostrar si son iguales

2- ANALISIS

    DE:
        - numero1, numero2, numero3

    DS:
        - cartel "son distintos"

    PROCESO:

        - si numero1 != numero2 y numero1 != numero3 y numero2 != numero3 entonces
            muestro "son distintos"




3- ESTRATEGIA:(QUE?)

    - Pedir los tres numeros
    - comparar los tres numeros y mostrar si son distintos

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


    // - comparar los tres numeros y mostrar si son distintos
    if((numero1 != numero2) && (numero1 != numero3) && (numero2 != numero3)){
        cout << "Los numeros ingresados son distintos" << endl;
    }

    system("pause");
    return 0;
}
