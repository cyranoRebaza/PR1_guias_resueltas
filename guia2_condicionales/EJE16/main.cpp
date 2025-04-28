/*
PR1-GUIA2-EJ16.
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.


******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir cuatro notas luego mostrar si promociona, rinde final, recupera o recursa

2- ANALISIS

    DE:
        - nota1, nota2, nota3, nota4

    DS:
        - cartel "Promociona" o "Rinde examen final" o "Recupera parciales" o "Recursa la materia"

    PROCESO:
    si (nota1 > 7) y (nota2 > 7) y (nota3 > 7) y (nota4 > 7)
        muestro "promociona"
    sino
        si (nota1 >= 4) entonces
            aprobados++
        si (nota2 >= 4) entonces
            aprobados++
        si (nota3 > 4) entonces
            aprobados++
        si (nota4 >= 4 entonces
            aprobados++

        si(aprobados >=3)
            muestro "Rinde examen final"
        sino
            si(aprobados >=1)
                muestro "Recupera parciales"
            sino
                muestro "Recursa la materia"


3- ESTRATEGIA:(QUE?)

    - Pedir las notas
    - pregunto por las notas que son mayores o iguales a 7
    - cuento las notas que son mayores o iguales a 4

4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int nota1, nota2, nota3, nota4;
    int aprobados = 0;
    // - Pedir las notas
    cout << "Ingrese nota1: ";
    cin >> nota1;

    cout << "Ingrese nota2: ";
    cin >> nota2;

    cout << "Ingrese nota3: ";
    cin >> nota3;

    cout << "Ingrese nota4: ";
    cin >> nota4;

    // - pregunto por las notas que son mayores o iguales a 7
    if((nota1 >= 7) && (nota2 >= 7) && (nota3 >= 7) && (nota4 >= 7)){
        cout << "Promociona" << endl;
    }
    else{
        // - cuento las notas que son mayores o iguales a 4
        if(nota1 >= 4){
            aprobados++;
        }

        if(nota2 >= 4){
            aprobados++;
        }

        if(nota3 >= 4){
            aprobados++;
        }

        if(nota4 >= 4){
            aprobados++;
        }

        // Pregunto por la cantidad de notas aprobadas
        if(aprobados >= 3){
            cout << "Rinde examen final" << endl;
        }
        else{
            if(aprobados >=1){
                cout << "Recupera parcial" << endl;
            }
            else{
                cout << "Recursa materia" << endl;
            }
        }

    }


    system("pause");
    return 0;
}
