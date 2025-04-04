/*
PR1-GUIA1-EJ12.
Una granja vende la caja de 12 unidades a $1000 y cada huevo suelto a $120.
Hacer un programa para ingresar la cantidad de huevos que compra un cliente y mostrar por pantalla el importe total a pagar.
Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se calcula como suelto.

Ejemplo A. Si la cantidad ingresada son 15 huevos, el programa calculará 1 caja y 3 sueltos, es decir $1000 + $120 x 3 = $1360.
Ejemplo B. Si la cantidad ingresada son 28 huevos el programa calculará 2 cajas y 4 sueltos, es decir $1000 x 2 + $120 x 4 = $2480.
Ejemplo C. Si la cantidad ingresada son 8 huevos, el programa calculará: 0 cajas y 8 sueltos, es decir $120 x 8 = $960.
Ejemplo D. Si la cantidad ingresada son 200 huevos, el programa calculará: 16 cajas y 8 sueltos, es decir $1000 x 16 + $120 x 8 = $16960.


*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - pedir la cantidad de huevos y mostrar el importe a pagar

2- ANALISIS

    DE:
        - cantidadHuevos


    DS:
        - importePagar


    PROCESO:

        - huevosSueltos = cantidadHuevos % 12
        - cajaHuevos = (cantidadHuevos - huevosSueltos)/ 12
        - importePagar = (cajaHuevos * 1000) + (huevosSueltos * 120)


3- ESTRATEGIA:(QUE?)

        - Pedir la cantidad de huevos

        - Calcular los huevos sueltos
        - Calcular la cajas de huevos
        - Calcular importe a pagar

        - Mostrar el importe a pagar


4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{

    // Declarar las variables
    int cantidadHuevos, huevosSueltos, CajaHuevos;
    float importePagar;
    const float PRECIO_CAJA = 1000;
    const float PRECIO_SUELTO = 120;



    // Pedir la cantidad de huevos
    cout << "Ingrese la cantidad de huevos vendidos: ";
    cin >> cantidadHuevos;


    // Calcular los huevos sueltos
    huevosSueltos = cantidadHuevos % 12;

    // Calcular la cajas de huevos
    CajaHuevos = (cantidadHuevos - huevosSueltos) / 12;

    // Calcular importe a pagar
    importePagar = (CajaHuevos * PRECIO_CAJA) + (huevosSueltos * PRECIO_SUELTO);

    // Mostrar el importe a pagar
    cout << "************************************" << endl;
    cout << "El importe a pagar es: $ " << importePagar << endl;


    return 0;
}
