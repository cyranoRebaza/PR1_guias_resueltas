/*
PR1-GUIA2-EJ24.
Hacer un programa para ingresar un número de mes y listar por pantalla a qué trimestre corresponde ese mes. Tener en cuenta esta lista:
Mes 1, 2 y 3. Trimestre 1. Mes 4, 5 y 6. Trimestre 2.
Mes 7, 8 y 9. Trimestre 3. Mes 10, 11 y 12. Trimestre 4.

Resolver este ejercicio utilizando la menor cantidad de salidas de IF posibles, de forma tal que si en un hipotético caso, hubiera años de 200 meses su diagrama no deba ser modificado en tal situación.

Recordar también que la división directa con el operador / genera un resultado con fracción. Por ejemplo si mes=7 y usted calcula trimestre=7/3 el resultado que obtendrá es trimestre= 2.33, lo cual es incorrecto



******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir un numero de mes y mostrar a que trimestre pertenece

2- ANALISIS

    DE:
        - mes

    DS:
        - trimestre



    PROCESO:

        - mes1 / 3 = cociente 0
        - mes1 % 3 = resto 1

        - mes2 / 3 = cociente 0
        - mes2 % 3 = resto 2

        - mes3 / 3 = cociente 1
        - mes3 % 3 = resto 0

        -----------------------------

        - mes4 / 3 = cociente 1
        - mes4 % 3 = resto 1

        - mes4 / 3 = cociente 1
        - mes4 % 3 = resto 1

        - mes5 / 3 = cociente 1
        - mes5 % 3 = resto 2

        - mes6 / 3 = cociente 2
        - mes6 % 3 = resto 0

        si restoMes == 1 o restoMes == 2 entonces trimestre = cociente + 1
        si restoMes == 0 entonces trimestre = cociente



3- ESTRATEGIA:(QUE?)

    - Pedir mes
    - Calcular el resto del mes
    - calcular el cociente (multiplo de 3)
    - calculamos el trimestre
    - muestro el trimestre




4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar variables
    int mes;
    int restoMes;
    int cociente;
    int trimestre;

    // - Pedir mes
    cout << "Ingrese mes: ";
    cin >> mes;

    // - Calcular el resto del mes
    restoMes = mes % 3;

    // - calcular el cociente (multiplo de 3)
    cociente = (mes - restoMes) / 3;

    // - calculamos el trimestre
    if(restoMes == 1 || restoMes == 2){
        trimestre = cociente + 1;
    }
    else if (restoMes == 0){
        trimestre = cociente;
    }

    // - muestro el trimestre
    cout << "--------------------------" << endl;
    cout << "Trimestre: " << trimestre << endl;
    return 0;
}
