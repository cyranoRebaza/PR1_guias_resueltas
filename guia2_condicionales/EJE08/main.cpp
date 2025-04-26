/*
PR1-GUIA2-EJ08.
Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar qué tipo de triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.



******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir los tres lados de un triangulo y mostrar que tipo de triangulo es

2- ANALISIS

    DE:
        - lado1, lado2, lado3

    DS:
        - cartel "Equilatero" o "Isoseles" o "Escaleno"

    PROCESO:

        - si lado1 != lado2 y lado1 != lado3 y lado2 != lado3 entonces
            muestro "Escaleno"
        sino
            si lado1 == lado2 y lado1 == lado3 entonces
                muestro "Equilatero"
            sino
                muestro "Isoseles"




3- ESTRATEGIA:(QUE?)

    - Pedir los tres lados del  triangulo
    - pregunto si los tres lados son distintos, si verdadero muestro escaleno
    - pregunto si los tres lados son iguales, si es verdadero muestro equilatero
    - por descarte queda mostrar isoseles


4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int lado1, lado2, lado3;


    // - Pedir los tres lados del  triangulo
    cout << "Ingrese lado1: ";
    cin >> lado1;

    cout << "Ingrese lado2: ";
    cin >> lado2;

    cout << "Ingrese lado3: ";
    cin >> lado3;


    // - pregunto si los tres lados son distintos, si verdadero muestro escaleno
    if((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3)){
        cout << "El triangulo es escaleno " << endl;
    }
    else{
        //  - pregunto si los tres lados son iguales, si es verdadero muestro equilatero
        if((lado1 == lado2) && (lado1 == lado3)){
            cout << "El triangulo es equilatero " << endl;
        }
        else{
            // - por descarte queda mostrar isoseles
            cout << "El triangulo es isoseles " << endl;
        }
    }



    system("pause");
    return 0;
}
