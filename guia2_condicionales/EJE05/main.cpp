/*
PR1-GUIA2-EJ05.
Un negocio de perfumería efectúa descuentos según el importe de la venta.
Si el importe es menor a $100 aplicar un descuento del 5%
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
Si el importe es mayor a $500 aplicar un descuento del 15%

Hacer un programa donde se ingresa el importe original sin descuento y se informe por pantalla el importe con el descuento ya aplicado.
Importante: Verifique que el programa emita UN SOLO CARTEL.



******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir importe de la venta sin descuento, aplicar descuento segun la cantidad del importe y mostrar el importe final con el descuento aplicado

2- ANALISIS

    DE:
        - importeInicial

    DS:
        - importeFinal

    PROCESO:

        - si importeInicial > 500 entonces
            descuento1 = importeInicial * 0.15
            importeFinal = importeInicial - descuento1

         sino
            si importeIncial > 100 entonces
                descuento2 = importeInicial * 0.10
                importeFinal = importeInicial - descuento2
            sino
                descuento3 = importeInicial * 0.05
                importeFinal = importeInicial - descuento3


        - muestro el importe final



3- ESTRATEGIA:(QUE?)

    - Pedir el importe inicial
    - calcular el importe final con respectivo descuento
    - muestro el importe final

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    float importeInicial, importeFinal;

    float descuento1, descuento2, descuento3;

    const float PORCENTAJE_DESCUENTO1 = 0.15;
    const float PORCENTAJE_DESCUENTO2 = 0.10;
    const float PORCENTAJE_DESCUENTO3 = 0.05;

    // - Pedir el importe inicial
    cout << "Ingrese el importe de la venta: $ ";
    cin >> importeInicial;

    // - calcular el importe final con respectivo descuento
    if(importeInicial > 500){

        descuento1 = importeInicial * PORCENTAJE_DESCUENTO1;
        importeFinal = importeInicial - descuento1;
    }
    else{
        if(importeInicial > 100){

            descuento2 = importeInicial * PORCENTAJE_DESCUENTO2;
            importeFinal = importeInicial - descuento2;
        }
        else{

            descuento3 = importeInicial * PORCENTAJE_DESCUENTO3;
            importeFinal = importeInicial - descuento3;
        }
    }


    // - muestro el importe final
    cout << "------------------------------------------------------------------" << endl;
    cout << "El importe de la venta con descuento aplicado es: $ " << importeFinal << endl;


    system("pause");
    return 0;
}
