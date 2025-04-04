/*
PR1-GUIA1-EJ15.
La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima en una zona y tiempo determinado. Dada la temperatura m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la amplitud t�rmica.
NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al de la temperatura m�nima.


*************************************************************
MRP:
*************************************************************
1-IDENTIFICAR:

    - pedir la temperatura maxima y minima luego mostrar la amplitud termica

2- ANALISIS

    DE:
        - temperaturaMaxima, temperaturaMinima


    DS:
        - amplitudTermica


    PROCESO:

        - amplitudTermica = temperaturaMaxima - temperaturaMinima


3- ESTRATEGIA:(QUE?)

        - Pedir la temperatura maxima y minima

        - Calcular la amplitud termica

        - Mostrar la amplitud termica


4- ALGORITMO:(COMO?)

5- CODIFICAR

*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    float temperaturaMaxima, temperaturaMinima, amplitudTermica;

    // Pedir la temperatura maxima y minima
    cout << "Ingrese la temperatura maxima: ";
    cin >> temperaturaMaxima;

    cout << "Ingrese la temperatura minima: ";
    cin >> temperaturaMinima;

    // Calcular la amplitud termica
    amplitudTermica = temperaturaMaxima - temperaturaMinima;

    // Mostrar la amplitud termica
    cout << "**************************************" << endl;
    cout << "La amplitud termica es: " << amplitudTermica << endl;

    return 0;
}
