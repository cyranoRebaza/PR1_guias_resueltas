/*
PR1-GUIA2-EJ20.
Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego, calcular e informar:
-	a)La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
-	b)El promedio de altura de las personas mayores a 30 años.
-	c)La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
-	d)La cantidad de personas cuya edad sea de 20, 30 o 40 años.



******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir la edad y la altura de cinco personas calcular y mostrar
        - cuantas personas son mayores a 30 miden mas de 1.80
        - el promedio de las alturas de las personas mayores a 30
        - cuantas personas miden entre 1.7 y 1.8
        - cuantas personas son de 20, cuantas de 30 o cuantas de 40

2- ANALISIS

    DE:
        - edad1, edad2, edad3, edad4, edad5
        - altura1, altura2, altura3, altura4, altura5

    DS:
        - cantidadMayores30
        - promedioAltura30
        - cantidadAlturaEntre
        - cantidadEdad203040


    PROCESO:

        - promedioAltura30 = acumuladorAltura30 / contadorAltura30


3- ESTRATEGIA:(QUE?)

    - Pedir la edad y la altura de cinco personas

    - calcular cuantas personas son mayores a 30 y miden mas de 1.80
    - Calcular el promedio de las alturas de las personas mayores a 30
    - Calcular cuantas personas miden entre 1.7 y 1.8
    - Calcular cuantas personas son de 20 o 30 0 40

    - Mostrar los calculos

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    // PUNTO A
    int edad1, edad2, edad3, edad4, edad5;
    float altura1, altura2, altura3, altura4, altura5;

    int cantidadMayores30 = 0;

    // PUNTO B
    float acumuladorAltura30 = 0;
    int contadorAltura30 = 0;
    float promedioAltura30 = 0;

    // PUNTO C
    int cantidadAlturaEntre = 0;

    // PUNTO D
    int cantidadEdad203040 = 0;

    // - Pedir la edad y la altura de cinco personas
    cout << "Ingrese la edad: ";
    cin >> edad1;

    cout << "Ingrese la altura: ";
    cin >> altura1;

    cout << "Ingrese la edad: ";
    cin >> edad2;

    cout << "Ingrese la altura: ";
    cin >> altura2;

    cout << "Ingrese la edad: ";
    cin >> edad3;

    cout << "Ingrese la altura: ";
    cin >> altura3;

    cout << "Ingrese la edad: ";
    cin >> edad4;

    cout << "Ingrese la altura: ";
    cin >> altura4;

    cout << "Ingrese la edad: ";
    cin >> edad5;

    cout << "Ingrese la altura: ";
    cin >> altura5;

    cout << "-----------------------" << endl;

    // - PUNTO A: calcular cuantas personas son mayores a 30 y miden mas de 1.80
    if (edad1 > 30 && altura1 > 1.80)
    {
        cantidadMayores30++;
    }
    if (edad2 > 30 && altura2 > 1.80)
    {
        cantidadMayores30++;
    }
    if (edad3 > 30 && altura3 > 1.80)
    {
        cantidadMayores30++;
    }
    if (edad4 > 30 && altura4 > 1.80)
    {
        cantidadMayores30++;
    }
    if (edad5 > 30 && altura5 > 1.80)
    {
        cantidadMayores30++;
    }

    // - PUNTO B: Calcular el promedio de las alturas de las personas mayores a 30
    if (edad1 > 30)
    {
        acumuladorAltura30 += altura1;
        contadorAltura30++;
    }
    if (edad2 > 30)
    {
        acumuladorAltura30 += altura2;
        contadorAltura30++;
    }
    if (edad3 > 30)
    {
        acumuladorAltura30 += altura3;
        contadorAltura30++;
    }
    if (edad4 > 30)
    {
        acumuladorAltura30 += altura4;
        contadorAltura30++;
    }
    if (edad5 > 30)
    {
        acumuladorAltura30 += altura5;
        contadorAltura30++;
    }

    if(contadorAltura30 != 0){
        promedioAltura30 = acumuladorAltura30 / contadorAltura30;
    }
    else{
        promedioAltura30 = 0;
    }

    // - PUNTO C: Calcular cuantas personas miden entre 1.7 y 1.8
    if (altura1 > 1.7 && altura1 < 1.8)
    {
        cantidadAlturaEntre++;
    }
    if (altura2 > 1.7 && altura2 < 1.8)
    {
        cantidadAlturaEntre++;
    }
    if (altura3 > 1.7 && altura3 < 1.8)
    {
        cantidadAlturaEntre++;
    }
    if (altura4 > 1.7 && altura4 < 1.8)
    {
        cantidadAlturaEntre++;
    }
    if (altura5 > 1.7 && altura5 < 1.8)
    {
        cantidadAlturaEntre++;
    }


    // - PUNTO D: Calcular cuantas personas son de 20 o 30 0 40
    if (edad1 == 20 || edad1 == 30 || edad1 == 40)
    {
        cantidadEdad203040++;
    }
    if (edad2 == 20 || edad2 == 30 || edad2 == 40)
    {
        cantidadEdad203040++;
    }
    if (edad3 == 20 || edad3 == 30 || edad3 == 40)
    {
        cantidadEdad203040++;
    }
    if (edad4 == 20 || edad4 == 30 || edad4 == 40)
    {
        cantidadEdad203040++;
    }
    if (edad5 == 20 || edad5 == 30 || edad5 == 40)
    {
        cantidadEdad203040++;
    }


    // - Mostrar
    // RESPUESTA PUNTO A:
    cout << "La cantidad de personas mayores a 30 que miden mas de 1.8 es: " << cantidadMayores30 << endl;

    // RESPUESTA PUNTO B:
    cout << "El promedio de alturas de personas mayores a 30 es: " << promedioAltura30 << endl;

    // RESPUESTA PUNTO C:
    cout << "La cantidad de personas con altura entre 1.7 y 1.8 es: " << cantidadAlturaEntre << endl;

    // RESPUESTA PUNTO D:
    cout << "La cantidad de personas con edades de 20 o 30 o 40 es: " << cantidadEdad203040 << endl;

    system("pause");
    return 0;
}
