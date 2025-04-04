/*
PR1-GUIA1-EJ08.
Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma venta
con el descuento aplicado y luego informar por pantalla el porcentaje de descuento aplicada a la misma.

Ejemplo A. Si el importe de la venta sin descuento es $1500 y el importe de la venta con descuento es $1200 entonces
el porcentaje de descuento aplicado fue el 20%.

Importante: Le sugerimos que haga una prueba con este ejemplo, ya que muchos lo resuelven y concluyen que el descuento
es el 80%. Eso NO es el descuento. Si el descuento fuera de 80% entonces una venta de $1500 se cobraría tan solo $300.

Ejemplo B. Si el importe de la venta sin descuento es $500 y el importe de la venta con descuento es $500 entonces el
porcentaje de descuento aplicado fue el 0%.


*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - Pedir el importe de venta sin descuento y con descuento luego mostrar el
    porcentaje de descuento aplicado

2- ANALISIS

    DE:
        - importeSinDescuento, importeConDescuento


    DS:
        - descuento = importeSinDescuento - importeConDescuento

        - porcentajeDescuento = (descuento * 100) / importeSinDescuento


    PROCESO:

        - descuento = importeVenta * 0.15
        - importeFinal = importeVenta - descuento



3- ESTRATEGIA:(QUE?)

        - Pedir el importe de venta sin descuento y con descuento

        - Calcular el descuento
        - Calcular el porcentaje de descuento

        - Mostrar el porcentaje de descuento

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
        // Declarar las variables
        float importeSinDescuento, importeConDescuento, descuento;
        float porcentajeDescuento;

        // Pedir el importe de venta sin descuento y con descuento
        cout << "Ingrese el importe de venta sin descuento: $ ";
        cin >> importeSinDescuento;

        cout << "Ingrese el importe de venta con descuento: $ ";
        cin >> importeConDescuento;

        // Calcular el descuento
        descuento = importeSinDescuento - importeConDescuento;

        // Calcular el porcentaje de descuento
        porcentajeDescuento = (descuento * 100.0 ) / importeSinDescuento;

        // Mostrar el porcentaje de descuento
        cout << "*******************************************" << endl;
        cout << "El porcentaje de descuento es: " << porcentajeDescuento << " %" << endl;

    return 0;
}
