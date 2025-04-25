/*
PR1-GUIA2-EJ04.
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia entre ambos.

Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5. Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.

Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO porque la diferencia absoluta siempre es un valor positivo.




******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir dos numeros y mostrar la diferencia entre ambos

2- ANALISIS

    DE:
        - numero1, numero2

    DS:
        - diferencia

    PROCESO:

        - si numero1 > numero2 entonces
            diferencia = numero1 - numero2

         sino
            diferencia = numero2 - numero1


        - muestro la diferencia



3- ESTRATEGIA:(QUE?)

    - Pedir los numeros
    - calcular la diferencia
    - muestro la diferencia

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero1, numero2;
    int diferencia;

    // - Pedir los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    // - calcular la diferencia
    if(numero1 > numero2){
        diferencia = numero1 - numero2;
    }
    else{
        diferencia = numero2 - numero1;
    }
    // - muestro la diferencia
    cout << "La diferencia es: " << diferencia << endl;

    system("pause");
    return 0;
}
