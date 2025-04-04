/*
PR1-GUIA1-EJ14.
Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.

Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
Importe: 4500, Descuento: 1800, total: 2700.


*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - pedir importe y el descuento luego mostrar el importe sin descuento, el descuento y importe con descuento

2- ANALISIS

    DE:
        - importeSinDescuento, descuento


    DS:
        - importeSinDescuento, descuento, importeConDescuento


    PROCESO:

        - importeConDescuento = importeSinDescuento - descuento


3- ESTRATEGIA:(QUE?)

        - Pedir el importe de la compra y el descuento
        - calcular el importe con descuento
        - mostrar el importe sin descuento, descuento y importe con descuento


4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    float importeSinDescuento, porcentajeDescuento, descuento, importeConDescuento;

    // Pedir el importe de la compra y el descuento
    cout << "Ingrese el importe de la compra: ";
    cin >> importeSinDescuento;

    cout << "Ingrese el porcentaje de descuento: ";
    cin >> porcentajeDescuento;

    // calcular el importe con descuento
    descuento = importeSinDescuento * porcentajeDescuento / 100;
    importeConDescuento = importeSinDescuento - descuento;

    // mostrar el importe sin descuento, descuento y importe con descuento
    cout << "*********************************" << endl;
    cout << "precio inicial: $ " << importeSinDescuento << endl;
    cout << "descuento     : $ " << descuento << endl;
    cout << "precio final  : $ " << importeConDescuento << endl;



    return 0;
}
