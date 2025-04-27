/*
PR1-GUIA2-EJ12.
Hacer un programa para ingresar tres números diferentes y determinar e informar el número del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8




******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir tres numero y mostrar el numero del medio

2- ANALISIS

    DE:
        - numero1, numero2, numero3

    DS:
        - mostrar el numero del medio

    PROCESO:

        - si (numero1 > numero2) y (numero1 < numero3) entonces
            muestro numero1

        si (numero1 < numero2) y (numero1 > numero3) entonces
            muestro numero1

        si (numero2 > numero1) y (numero2 < numero3) entonces
            muestro numero2

        si (numero2 < numero1) y (numero2 > numero3) entonces
            muestro numero2

        si (numero3 > numero1) y (numero3 < numero2) entonces
            muestro numero3

        si (numero3 < numero1) y (numero3 > numero2) entonces
            muestro numero3





3- ESTRATEGIA:(QUE?)

    - Pedir los tres numeros
    - Calculo las 6 combinaciones posibles y muestro

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero1, numero2, numero3;

    // - Pedir los tres numeros
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    cout << "Ingrese un numero: ";
    cin >> numero3;


    // - Calculo las 6 combinaciones posibles y muestro
    // para el numero1
    if((numero1 > numero2) && (numero1 < numero3)){
        cout << "El numero del medio es: " << numero1 << endl;
    }

    if((numero1 < numero2) && (numero1 > numero3)){
        cout << "El numero del medio es: " << numero1 << endl;
    }
    // para el numero2
    if((numero2 > numero1) && (numero2 < numero3)){
        cout << "El numero del medio es: " << numero2 << endl;
    }

    if((numero2 < numero1) && (numero2 > numero3)){
        cout << "El numero del medio es: " << numero2 << endl;
    }

    // para el numero3
    if((numero3 > numero1) && (numero3 < numero2)){
        cout << "El numero del medio es: " << numero3 << endl;
    }

    if((numero3 < numero1) && (numero3 > numero2)){
        cout << "El numero del medio es: " << numero3 << endl;
    }

    // METODO 2:
    cout << "----------------------" << endl;
    cout << "|      METODO 2      |" << endl;
    cout << "----------------------" << endl;

    // Declarar las variables
     int num1, num2, num3;
     int mayor, segundoMayor;

     // - Pedir los numeros
     cout << "Ingrese un numero: ";
     cin >> num1;
     cout << "Ingrese un numero: ";
     cin >> num2;
     cout << "Ingrese un numero: ";
     cin >> num3;

     if (num1 > num2)
     {
        mayor = num1;
        segundoMayor = num2;
     }
     else{
        mayor = num2;
        segundoMayor = num1;
     }

     if (num3 > mayor)
     {
        segundoMayor = mayor;
        mayor = num3;
     }
     else{
        if (num3 > segundoMayor)
        {
            segundoMayor = num3;
        }
     }

     // muestro el segundo mayor
     cout << "El numero del medio es: " << segundoMayor << endl;


    system("pause");
    return 0;
}
