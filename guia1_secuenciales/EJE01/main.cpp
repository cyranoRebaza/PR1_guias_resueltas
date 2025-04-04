/*
PR1-GUIA1-EJ01.
Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y
el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

*************************************************************
MRP
*************************************************************
1-IDENTIFICAR:
    - Pedir la cantidad de horas y pago por hora y luego mostrar el sueldo

2- ANALISIS

    DE:
        - horasTrabajadas
        - pagoHora

    DS:
        - sueldo

    PROCESO:

        - sueldo = pagoHora * horasTrabajadas

3- ESTRATEGIA:(QUE?)

    - Pedir la cantidad de horas trabajadas y pago por hora
    - Calcular el sueldo
    - Mostrar el sueldo

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int horasTrabajadas;
    float pagoHora;
    float sueldo;

    // Pedir la cantidad de horas trabajadas y pago por hora
    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> horasTrabajadas;

    cout << "Ingresar  pago por hora: ";
    cin >> pagoHora;

    // calcular el sueldo
    sueldo = pagoHora * horasTrabajadas;

    // Mostrar el sueldo
    cout << "*****************************************" << endl;
    cout << "El sueldo del trabajador es: " << sueldo << endl;
    return 0;
}
