/*
PR1-GUIA2-EJ22.
Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su sucursal. Se sabe que para producir caramelos tienen los siguientes costos:

- Costo de alquiler de $10000
- Costo por caramelo producido de $2.50
- Costo por mantenimiento cada 100 caramelos de $5000

Dados el presupuesto inicial y la cantidad de caramelos a producir el primer mes, informar:

- "El presupuesto es suficiente para cubrir los costos de $XXXX"
- "El presupuesto no es suficiente, necesita un crédito de $XXXX"



******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir presuesto inicial y la cantidad de caramelos que se van a producir en un mes
    - calcular y mostrar si el presuesto alcanza para cubrir los costos de produccion
    - calcular y mostrar si el presupuesto no alcanza, cuanto credito necesito

2- ANALISIS

    DE:
        - presupuestoInicial, cantidadCaramelos

    DS:
        - cartel "El presupuesto es suficiente, alcanza para cubrir los costo "
        - cartel "El presupuesto no es suficiente, necesito credito "



    PROCESO:

        - costo de produccion
            - alquiler = 10000
            - costo/caramelo = 2.50
            - mantenimiento = 5000 cada 100 caramelos producidos

        - costoTotal  = alquiler + (costoUnitario * cantidadacaramelos) + mantenimientoTotal

        - mantenimientoTotal = costoMantenimiento * (cantidadCaramelos - cantidadCaramelos%100) / 100

        - credito = costoTotal - presupuestoInicial



3- ESTRATEGIA:(QUE?)

    - Pedir Datos
    - Calcular el mantenimiento total
    - calcular el costo total
    - comparar el presupuesto inicial con el costo total




4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    float presupuestoInicial;
    int cantidadCaramelos;
    float mantenimientoTotal, costoMantenimiento;

    float costoTotal;

    float alquiler = 10000.0f;
    float costoUnitario = 2.50f;

    float credito;


    // - Pedir Datos
    cout << "Ingrese el presupuesto Inicial: $ ";
    cin >> presupuestoInicial;

    cout << "Ingrese la cantidad de caramelos a producir: ";
    cin >> cantidadCaramelos;


    // - Calcular el mantenimiento total
    mantenimientoTotal = costoMantenimiento * (cantidadCaramelos - cantidadCaramelos%100)/ 100;

    // - calcular el costo total
    costoTotal = alquiler + (costoUnitario * cantidadCaramelos) + mantenimientoTotal;

    // - comparar el presupuesto inicial con el costo total
    if(presupuestoInicial > costoTotal){
        cout << "El presupuesto es suficiente para cubrir los costos de $ " << costoTotal << endl;
    }
    else{
        credito = costoTotal - presupuestoInicial;
        cout << "El presupuesto no es suficiente, neceesita un credito de $ " << credito << endl;
    }



    system("pause");
    return 0;
}
