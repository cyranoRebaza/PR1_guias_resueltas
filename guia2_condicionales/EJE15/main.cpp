/*
PR1-GUIA2-EJ15.
Un año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos de 100 pero que no sean múltiplos de 400. Esto último significa que el año 1900 no es bisiesto, pero el año 2000 sí lo es. Hacer un programa para  ingresar un año y listar por pantalla si es bisiesto o no lo es.

Ejemplo A. Si se ingresa el año 2020 se indicará como bisiesto.
Ejemplo B. Si se ingresa el año 2019 se indicará como no bisiesto.
Ejemplo C. Si se ingresa el año 1800 o 1900 se indicará como no bisiesto. Ejemplo D. Si se ingresa el año 1600 o 2000 se indicará como bisiesto.




******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir el anio y mostrar si es bisiesto o no

2- ANALISIS

    DE:
        - anio

    DS:
        - cartel "bisiesto" o "no bisiesto"

    PROCESO:
    bisiesto --> son los años multiplos de 4, pero no son multiplos de 100
    bisiesto --> y si son multiplos de 100 y son multiplos de 400


3- ESTRATEGIA:(QUE?)

    - Pedir el anio
    - Calculo si son o no multiplos de 4, 100 o 400

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int anio;

    // - Pedir el anio
    cout << "Ingrese el anio: ";
    cin >> anio;

    // - Calculo si son o no multiplos de 4, 100 o 400
        if (anio % 4 == 0)
    {
        if (anio % 100 == 0)
        {
            if (anio % 400 == 0)
            {
                // multiplo 4 y multiplo de 100 y multiplo de 400
                cout << "Bisiesto" << endl;
            }
            else{
                cout << "No bisiesto" << endl;
            }

        }
        else{
            // multiplo de 4 pero no es multiplo de 100
            cout << "Bisiesto" << endl;
        }

    }
    else{
        cout << "No bisiesto " << endl;
    }


    // METODO 2:
    cout << "----------------------" << endl;
    cout << "|      METODO 2      |" << endl;
    cout << "----------------------" << endl;

    // Declarar las variables
    int anio2;

    // - Pedir los datos
    cout << "Ingrese el anio: ";
    cin >> anio2;

    // pregunto si anio2 es multiplo de 4
    if (anio2 % 4 == 0)
    {
        // pregunto si es multiplo de 400
        if (anio2 % 400 == 0)
        {
            cout << "Bisiesto" << endl;
        }
        else{
            // pregunto si es multiplo de 100
            if (anio2 % 100 == 0)
            {
                cout << "No bisiesto" << endl;
            }
            else{
                cout << "Bisiesto" << endl;
            }

        }

    }
    else{
        cout << "No bisiesto" << endl;
    }

    system("pause");
    return 0;
}
