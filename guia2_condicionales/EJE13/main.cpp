/*
PR1-GUIA2-EJ13.
Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
Si N1=8, N2=6, N3=10 ó  N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=8, N3=10 ó  N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=10, N3=8 ó  N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.





******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir tres numero y mostralos de forma ascendende ( de menor a mayor)

2- ANALISIS

    DE:
        - numero1, numero2, numero3

    DS:
        - mostrar los numeros de menor a mayor

    PROCESO:

        -si(numero1 < numero2) y (numero1 < numero3) entonces
            muestro numero1
            si(numero2 < numero3)entonces
                muestro numero2
                muestro numero3
            sino
                muestro numero3
                muestro numero2
        sino
            si(numero2 < numero1) y (numero2 < numero3) entonces
                muestro numero2
                si(numero1 < numero3)entonces
                    muestro numero1
                    muestro numero3
                sino
                    muestro numero3
                    muestro numero1
            sino
                muestro numero3
                si(numero1 < numero2) entonces
                    muestro numero1
                    muestro numero2
                sino
                muestro numero2
                muestro numero1



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

    cout << "Ingrese numero: ";
    cin >> numero3;


    // - Calculo las 6 combinaciones posibles y muestro
    if((numero1 < numero2) && (numero1 < numero3))
    {
        cout << numero1 << endl;
        if(numero2 < numero3)
        {
            cout << numero2 << endl;
            cout << numero3 << endl;
        }
        else
        {
            cout << numero3 << endl;
            cout << numero2 << endl;
        }
    }
    else
    {
        if((numero2 < numero1) && (numero2 < numero3))
        {
            cout << numero2 << endl;
            if(numero1 < numero3)
            {
                cout << numero1 << endl;
                cout << numero3 << endl;
            }
            else
            {
                cout << numero3 << endl;
                cout << numero1 << endl;
            }
        }
        else{
            cout << numero3 << endl;
            if(numero1 < numero2){
                cout << numero1 << endl;
                cout << numero2 << endl;
            }
            else{
                cout << numero2 << endl;
                cout << numero1 << endl;
            }
        }
    }



    // METODO 2:
    cout << "----------------------" << endl;
    cout << "|      METODO 2      |" << endl;
    cout << "----------------------" << endl;

    // Declarar las variables
    int num1, num2, num3;
    int menor, medio, mayor;

    // - Pedir los numeros
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese un numero: ";
    cin >> num2;
    cout << "Ingrese un numero: ";
    cin >> num3;

    // - Calculo las 6 combinaciones posibles descartando los numeros analizados
    if((num1 < num2) && (num1 < num3))
    {
        menor = num1;
        if (num2 < num3)
        {
            medio = num2;
            mayor = num3;
        }
        else
        {
            medio = num3;
            mayor = num2;
        }

    }
    else
    {
        // hasta aqui sabemos que num1 no es menor
        if(num2 < num3)
        {
            menor = num2;
            if(num1 < num3)
            {
                medio = num1;
                mayor = num3;
            }
            else
            {
                medio = num3;
                mayor = num1;
            }
        }
        else
        {
            menor =  num3;
            if(num1 < num2)
            {
                medio = num1;
                mayor = num2;
            }
            else
            {
                medio = num2;
                mayor = num1;
            }
        }

    }

    // muestro el menor, medio y mayor
    cout << "------------------------------------" << endl;
    cout << "El numero del menor es: " << menor << endl;
    cout << "El numero del medio es: " << medio << endl;
    cout << "El numero del mayor es: " << mayor << endl;




    return 0;
}
