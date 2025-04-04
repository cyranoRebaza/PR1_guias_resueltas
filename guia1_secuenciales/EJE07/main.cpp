/*
PR1-GUIA1-EJ07.
Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma
y luego informar por pantalla el importe a pagar.

Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar será de $1020.
Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar será de $800.


*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - Pedir el importe de una venta y el porcentaje de descuento luego mostrar el pago final

2- ANALISIS

    DE:
        - importeVenta, porcentajeDescuento


    DS:
        - importeFinal


    PROCESO:

        - descuento = importeVenta * 0.15
        - importeFinal = importeVenta - descuento



3- ESTRATEGIA:(QUE?)

        - Pedir el importe de la venta y el porcentaje de descuento

        - Calcular el descuento y el importe final

        - Mostrar el importe final

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    float importeVenta, porcentajeDescuento;
    float descuento, importeFinal;

    // Pedir el importe de la venta y el porcentaje de descuento
    cout << "Ingrese el importe de venta: $ ";
    cin >> importeVenta;

    cout << "Ingrese el porcentaje de descuento: % ";
    cin >> porcentajeDescuento;

    // Calcular el descuento y el importe final
    descuento = importeVenta * porcentajeDescuento / 100.0;
    importeFinal = importeVenta - descuento;

    // Mostrar el importe final
    cout << "*************************************" << endl;
    cout << "El importe final es: $ " << importeFinal << endl;

    return 0;
}
