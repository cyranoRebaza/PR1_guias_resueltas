/*
PR1-GUIA2-EJ18.
Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:
$10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
$12 por kW por el consumo excedente de 101 a 200 kW.
$15 por kW por el consumo excedente de 201 kW en adelante.

Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente,
el programa calcule e informe el total a pagar.

Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kW, se calculará: $10 x 100 + $12 x 25 = $1300.
Ejemplo 3: Un consumo de 250 kW, se calculará: $10 x 100 + $12 x 100 + $15 x 50 = $2950.





******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir la cantidad de consumo de kilovatios y
    - mostrar el total a pagar teniendo en cuenta el precio por kilovatios

2- ANALISIS

    DE:
        - kiloVatios (kw)

    DS:
        - precioTotal

    PROCESO:

        - tarifa1 = 10
        - tarifa2 = 12
        - tarifa3 = 15
        - si kw <= 100 entonces
                precioTotal = kw * tarifa1
            sino
                si kw <=200 entoces
                    precioTotal = 100*tarifa1 + (kw-100)*tarifa2
                sino
                    precioTotal = 100*tarifa1 + 100*tarifa2 + (kw-200)*tarifa3

        - muestro precio total


3- ESTRATEGIA:(QUE?)

    - Pedir los kilovatios
    - Preguntar por consumo de kilovarios entre 100 y 200 y calculo el precio total
    - mostrar el precio total

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar variables
    float kiloVatios;
    float precioTotal;

    const float TARIFA1 = 10.0f;
    const float TARIFA2 = 12.0f;
    const float TARIFA3 = 15.0f;




    // - Pedir los kilovatios
    cout << "Ingrese el consumo de kilovatios: ";
    cin >> kiloVatios;

    // - Preguntar por consumo de kilovarios entre 100 y 200 y calculo el precio total
    if(kiloVatios <= 100){
        precioTotal = kiloVatios * TARIFA1;
    }
    else{
        if(kiloVatios <= 200){
            precioTotal = 100 * TARIFA1 + (kiloVatios - 100) * TARIFA2;
        }
        else{
            precioTotal = (100 * TARIFA1) + (100 * TARIFA2) + ((kiloVatios - 200) * TARIFA3);
        }
    }

    // - mostrar el precio total
    cout << "El precio total es: " << precioTotal << endl;
    system("pause");
    return 0;
}
