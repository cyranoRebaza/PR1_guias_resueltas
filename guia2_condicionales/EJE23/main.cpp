/*
PR1-GUIA2-EJ23.
Hacer un programa para ingresar un número de mes y listar por pantalla a qué bimestre corresponde ese mes. Tener en cuenta esta lista:
Mes 1 y 2. Bimestre 1. Mes 3 y 4. Bimestre 2. Mes 5 y 6. Bimestre 3.
Mes 7 y 8. Bimestre 4. Mes 9 y 10. Bimestre 5. Mes 11 y 12. Bimestre 6.

Resolver este ejercicio utilizando la menor cantidad de salidas de IF posibles, de forma tal que si en un hipotético caso, hubiera años de 200 meses su diagrama no deba ser modificado en tal situación.

Recordar también que la división directa con el operador /  genera un resultado con fracción. Por ejemplo si mes=7 y usted calcula bimestre=7/2 el resultado que obtendrá es bimestre= 3.5, lo cual es incorrecto.



******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir un numero de mes y mostrar a que bimestre pertenece

2- ANALISIS

    DE:
        - mes

    DS:
        - bimestre



    PROCESO:

        - mes1 / 2 = cociente 0
        - mes1 % 2 = resto 1

        - mes2 / 2 = cociente 1
        - mes2 % 2 = resto 0

        - mes3 / 2 = cociente 1
        - mes3 % 2 = resto 1

        - mes4 / 2 = cociente 2
        - mes4 % 2 = resto 0

        si restoMes == 1 entonces bimestre = cociente + 1
        si restoMes == 0 entonces bimestre = cociente



3- ESTRATEGIA:(QUE?)

    - Pedir mes
    - Calcular el resto del mes
    - calcular el cociente (multiplo de 2)
    - calculamos el bimestre
    - muestro el bimestre




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
    int bimestre;

    //- Pedir mes
    cout << "Ingrese el mes: ";
    cin >> mes;

    // - Calcular el resto del mes
    restoMes = mes % 2;

    // - calcular el cociente (multiplo de 2)
    cociente = (mes - restoMes) / 2;

    // - calculamos el bimestre
    if(restoMes == 1){
        bimestre = cociente + 1;
    }
    else if(restoMes == 0){
        bimestre = cociente;
    }

    // - muestro el bimestre
    cout << "------------------------" << endl;
    cout << "Bimestre: " << bimestre << endl;


    system("pause");
    return 0;
}
