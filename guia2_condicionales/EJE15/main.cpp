/*
PR1-GUIA2-EJ15.
Un a�o es bisiesto si es m�ltiplo de 4, exceptuando a los a�os que son m�ltiplos de 100 pero que no sean m�ltiplos de 400. Esto �ltimo significa que el a�o 1900 no es bisiesto, pero el a�o 2000 s� lo es. Hacer un programa para  ingresar un a�o y listar por pantalla si es bisiesto o no lo es.

Ejemplo A. Si se ingresa el a�o 2020 se indicar� como bisiesto.
Ejemplo B. Si se ingresa el a�o 2019 se indicar� como no bisiesto.
Ejemplo C. Si se ingresa el a�o 1800 o 1900 se indicar� como no bisiesto. Ejemplo D. Si se ingresa el a�o 1600 o 2000 se indicar� como bisiesto.




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
    bisiesto --> son los a�os multiplos de 4, pero no son multiplos de 100
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
