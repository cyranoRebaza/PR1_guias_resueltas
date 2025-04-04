/*
PR1-GUIA1-EJ06.
Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes.
El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.

Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y
como porcentajes por semana: 20%, 15%, 60% y 5%.

*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - Pedir recaudacion de cada semana del mes luego mostrar el promedio y porcentaje por semana

2- ANALISIS

    DE:
        - recaudacionS1, recaudacionS2, recaudacionS3, recaudacionS4


    DS:
        - promedioSemana,
        - porcentajeS1, porcentajeS2, porcentajeS3, porcentajeS4


    PROCESO:

        - recaudacionTotal = recaudacionS1 + recaudacionS2 + recaudacionS3 + recaudacionS4

        - promedioSemana = recaudacionTotal / 4

        - porcentajeS1 = recaudacionS1 / recaudacionTotal
        - porcentajeS2 = recaudacionS2 / recaudacionTotal
        - porcentajeS3 = recaudacionS3 / recaudacionTotal
        - porcentajeS4 = recaudacionS4 / recaudacionTotal



3- ESTRATEGIA:(QUE?)

        - Pedir la recaudacion de cada semana

        - Calcular la recaudacion total
        - Calcular promedio recaudacion semanal
        - Calcular porcentaje de recaudacion de cada semana

        - Mostrar porcentaje de recaudacion de cada semana

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    float recaudacionS1, recaudacionS2, recaudacionS3, recaudacionS4;
    float recaudacionTotal, promedioSemana;
    const float SEMANAS = 4;
    float porcentajeS1, porcentajeS2, porcentajeS3, porcentajeS4;

    //Pedir la recaudacion de cada semana
    cout << "Ingrese la recaudacion de la semana 1: $ ";
    cin >> recaudacionS1;

    cout << "Ingrese la recaudacion de la semana 2: $ ";
    cin >> recaudacionS2;

    cout << "Ingrese la recaudacion de la semana 3: $ ";
    cin >> recaudacionS3;

    cout << "Ingrese la recaudacion de la semana 4: $ ";
    cin >> recaudacionS4;

    // Calcular la recaudacion total
    recaudacionTotal = recaudacionS1 + recaudacionS2 + recaudacionS3 + recaudacionS4;

    // Calcular promedio recaudacion semanal
    promedioSemana = recaudacionTotal / SEMANAS;

    // Calcular porcentaje de recaudacion de cada semana
    porcentajeS1 = recaudacionS1 * 100.0 / recaudacionTotal;
    porcentajeS2 = recaudacionS2 * 100.0 / recaudacionTotal;
    porcentajeS3 = recaudacionS3 * 100.0 / recaudacionTotal;
    porcentajeS4 = recaudacionS4 * 100.0 / recaudacionTotal;

    // Mostrar porcentaje de recaudacion de cada semana
    cout << "*********************************************" << endl;
    cout << "Promedio de recaudacion semanal: $ " << promedioSemana << endl;
    cout << "Porcentaje recacaudacion semana 1: " << porcentajeS1 << " %" << endl;
    cout << "Porcentaje recacaudacion semana 2: " << porcentajeS2 << " %" << endl;
    cout << "Porcentaje recacaudacion semana 3: " << porcentajeS3 << " %" << endl;
    cout << "Porcentaje recacaudacion semana 4: " << porcentajeS4 << " %" << endl;
    return 0;
}
