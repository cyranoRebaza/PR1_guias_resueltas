/*
PR1-GUIA1-EJ16.
El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada frasco contiene 75 píldoras y
cada píldora contiene 45 mg de Betamol, 2 grs de Micilina y 7 mg de Ácido Sinítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de
miligramos de Betamol, Micilina y de Ácido Sinítico que son necesarios para elaborarlos.


*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - Pedir la cantidad de frascos y mostrar la cantidad de miligramos de betamol, micelina y acido sinitico

2- ANALISIS

    DE:
        - frascos


    DS:
        - betamol, micelina, acidoSinitico

    PROCESO:

        - pildorasTotales = pildorasFrasco * frascos
        - betamol = 45 * pildorasTotales
        - micelina = 2000 * pildorasTotales
        - acidoSinitico = 7 * pildorasTotales


3- ESTRATEGIA:(QUE?)

        - Pedir la cantidad de frascos
        - Calcular la cantidad total de pildoras y los miligramos de cada ingrediente
        - Mostrar los miligramos totales de cada ingrediente


4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int frascos;
    const int PILDORAS_FRASCO = 75;
    int pildorasTotales;
    const int BETAMOL_PILDORA = 45;
    const int MICELINA_PILDORA = 2000;
    const int ACSINITICO_PILDORA = 7;
    int cantidadBetamol, cantidadMicelina, cantidadAcidoSinitico;


    // Pedir la cantidad de frascos
    cout << "Ingrese la cantidad de frascos: ";
    cin >> frascos;

    // Calcular la cantidad total de pildoras y los miligramos de cada ingrediente
    pildorasTotales = PILDORAS_FRASCO * frascos;

    cantidadBetamol = BETAMOL_PILDORA * pildorasTotales;
    cantidadMicelina = MICELINA_PILDORA * pildorasTotales;
    cantidadAcidoSinitico = ACSINITICO_PILDORA * pildorasTotales;

    // Mostrar los miligramos totales de cada ingrediente
    cout << "*********************************************" << endl;
    cout << " La proporcion de los ingredientes en mg es: " << endl;
    cout << "*********************************************" << endl;
    cout << "Betamol       : " << cantidadBetamol << endl;
    cout << "Micelina      : " << cantidadMicelina << endl;
    cout << "Acido Sinitico: " << cantidadAcidoSinitico << endl;





    return 0;
}
