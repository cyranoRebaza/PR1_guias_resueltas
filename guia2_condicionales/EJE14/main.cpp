/*
PR1-GUIA2-EJ14.
Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular luego la edad en años de esa persona y listar por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.



******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir la fecha actual y la fecha de nacimiento luego mostrar la edad

2- ANALISIS

    DE:
        - diaNacimiento, mesNacimiento, anioNacimiento
        - diaActual, mesActual, anioActual

    DS:
        - edad

    PROCESO:

        - edad = anioActual - anioNacimiento

        - si(mesActual < mesNacimiento) entonces
            edad = edad - 1
        sino
            si(mesActual == mesNacimiento) entonces
                si(diaActual < diaNacimiento) entonces
                    edad = edad -1





3- ESTRATEGIA:(QUE?)

    - Pedir la fecha de nacimiento y la fecha actual
    - Calculo la edad
    - Muestro la edad

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int diaNacimiento, mesNacimiento, anioNacimiento;
    int diaActual, mesActual, anioActual;
    int edad;

    // - Pedir la fecha de nacimiento y la fecha actual
    cout << "----------------------" << endl;
    cout << "|  FECHA NACIMIENTO  |" << endl;
    cout << "----------------------" << endl;

    cout << "Ingrese el dia: ";
    cin >> diaNacimiento;

    cout << "Ingrese el mes: ";
    cin >> mesNacimiento;

    cout << "Ingrese el anio: ";
    cin >> anioNacimiento;

    cout << "----------------------" << endl;
    cout << "|    FECHA ACTUAL    |" << endl;
    cout << "----------------------" << endl;

    cout << "Ingrese el dia: ";
    cin >> diaActual;

    cout << "Ingrese el mes: ";
    cin >> mesActual;

    cout << "Ingrese el anio: ";
    cin >> anioActual;

    // - Calculo la edad
    edad = anioActual - anioNacimiento;

    if(mesActual < mesNacimiento){
        edad = edad -1;
    }
    else{
        if(mesActual == mesNacimiento){
            if(diaActual < diaNacimiento){
                edad = edad - 1;
            }

        }

    }


    // - Muestro la edad
    cout << "------------------------------------------" << endl;
    cout << "La edad de la persona es: " << edad << " anios" << endl;

    system("pause");
    return 0;
}
