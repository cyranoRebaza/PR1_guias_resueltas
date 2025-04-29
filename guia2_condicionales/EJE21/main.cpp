/*
PR1-GUIA2-EJ21.
Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40 marrones y 49 grises. Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:

-	Cantidad de carteras
-	Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
-	Cantidad total de carteras vendidas en total.
-	Cuántas carteras quedaron de cada tipo.
-	Los colores de carteras que no se vendieron.
NOTA: Ninguna venta superará las 10 carteras.



******************************************************************************************
MRP
*****************************************************************************************
1-IDENTIFICAR:
    - Pedir que ingresemos tres ventas donde cada venta compuesta por la cantidad de carteras y tipo de cartera (4 tipos)
    - ninguna venta supera las 10 carteras

    - calcular y mostrar
        - la cantidad total de carteras
        - cuantas carteras quedaron sin vender de cada tipo
        - los colores de carteras que no se vendieron




2- ANALISIS

    DE:
        - 3 ventas
        - una venta consiste --> cantidadCarteras y tipoCartera

    DS:
        - cantidad total
        - cantidad carteras de cada tipo
        - cantidad carteras que no se vendieron


    PROCESO:

        - carteras disposibles de cada tipo
            - cantidadBlancas = 45
            - cantidadNegras = 50
            - cantidadMarrones = 40
            - cantidadGrises = 49

        - cantidad carteras  que quedaron de cada tipo despues de la venta
            - cantidadBlancas = cantidadBlancas - cantidadCarteras
            - cantidadNegras = cantidadNegras - cantidadCarteras
            - cantidadMarrones = cantidadMarrones - cantidadCarteras
            - cantidadGrises = cantidadGrises - cantidadCarteras

        - cantidadTotal = cantidadTotal + cantidadCarteras

        - cantidad de carteras que no se vendieron
            - comparo con el stock de cada tipo de cartera, si se mantiene muestro no se vendio sino muestro cuanto queda


3- ESTRATEGIA:(QUE?)

    - Pedir la cantidad de carteras vendidas y el tipo de cartera

    - calcular la cantidad carteras que quedaron de cada tipo despues de la venta
    - calcular la cantidad total de carteras vendidas
    - calcular la candidad de carteras que no se vendieron



4- ALGORITMO:(COMO?)

5- CODIFICAR

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int cantidadCarteras, tipoCartera;

    // stock
    int cantidadBlancas = 45;
    int cantidadNegras = 50;
    int cantidadMarrones = 40;
    int cantidadGris = 49;

    int cantidadTotal = 0;


    // - Pedir la cantidad de carteras vendidas y el tipo de cartera
    // VENTA 1:
    cout << "--------------- VENTA 1 ---------------" << endl;
    cout << "Ingrese la cantidad de carteras vendidas: ";
    cin >> cantidadCarteras;

    cout << "Ingrese tipo de cartera (1 - Blanco | 2 - Negro | 3 - Marron | 4 - Gris): ";
    cin >> tipoCartera;


    // - calcular la cantidad carteras que quedaron de cada tipo despues de la venta
    switch(tipoCartera){

    case 1:
        cantidadBlancas = cantidadBlancas - cantidadCarteras;
        break;
    case 2:
        cantidadNegras = cantidadNegras - cantidadCarteras;
        break;
    case 3:
        cantidadMarrones = cantidadMarrones - cantidadCarteras;
        break;
    case 4:
        cantidadGris = cantidadGris - cantidadCarteras;
        break;


    }

    // - calcular la cantidad total de carteras vendidas
    cantidadTotal = cantidadTotal + cantidadCarteras;

    // VENTA 2:
    cout << "--------------- VENTA 2 ---------------" << endl;
    cout << "Ingrese la cantidad de carteras vendidas: ";
    cin >> cantidadCarteras;

    cout << "Ingrese tipo de cartera (1 - Blanco | 2 - Negro | 3 - Marron | 4 - Gris): ";
    cin >> tipoCartera;


    // - calcular la cantidad carteras que quedaron de cada tipo despues de la venta
    switch(tipoCartera){

    case 1:
        cantidadBlancas = cantidadBlancas - cantidadCarteras;
        break;
    case 2:
        cantidadNegras = cantidadNegras - cantidadCarteras;
        break;
    case 3:
        cantidadMarrones = cantidadMarrones - cantidadCarteras;
        break;
    case 4:
        cantidadGris = cantidadGris - cantidadCarteras;
        break;


    }

    // - calcular la cantidad total de carteras vendidas
    cantidadTotal = cantidadTotal + cantidadCarteras;


    // VENTA 3:
    cout << "--------------- VENTA 3 ---------------" << endl;
    cout << "Ingrese la cantidad de carteras vendidas: ";
    cin >> cantidadCarteras;

    cout << "Ingrese tipo de cartera (1 - Blanco | 2 - Negro | 3 - Marron | 4 - Gris): ";
    cin >> tipoCartera;


    // - calcular la cantidad carteras que quedaron de cada tipo despues de la venta
    switch(tipoCartera){

    case 1:
        cantidadBlancas = cantidadBlancas - cantidadCarteras;
        break;
    case 2:
        cantidadNegras = cantidadNegras - cantidadCarteras;
        break;
    case 3:
        cantidadMarrones = cantidadMarrones - cantidadCarteras;
        break;
    case 4:
        cantidadGris = cantidadGris - cantidadCarteras;
        break;


    }


    // - calcular la cantidad total de carteras vendidas
    cantidadTotal = cantidadTotal + cantidadCarteras;

    // - Mostrar la cantidad de carteras vendidas
    cout << "-------------------------------------------------------" << endl;
    cout << "Cantidad total de carteras vendidas--: " << cantidadTotal << endl << endl;


    // - calcular la candidad de carteras que no se vendieron
    if (cantidadBlancas == 45)
    {
        cout << "Carteras blancas---------------------: No se vendieron" << endl;
    }
    else{
        cout << "stock carteras blancas---------------: " << cantidadBlancas << endl;
    }

    if (cantidadNegras == 50)
    {
        cout << "Carteras negras----------------------: No se vendieron" << endl;
    }
    else{
        cout << "stock carteras negras----------------: " << cantidadNegras << endl;
    }

    if (cantidadMarrones == 40)
    {
        cout << "Carteras marrones--------------------: No se vendieron" << endl;
    }
    else{
        cout << "stock carteras marrones--------------: " << cantidadMarrones << endl;
    }

    if (cantidadGris == 49)
    {
        cout << "Carteras grises----------------------: No se vendieron" << endl;
    }
    else{
        cout << "stock carteras grises----------------: " << cantidadGris << endl;
    }

    cout << endl;
    system("pause");
    return 0;
}
