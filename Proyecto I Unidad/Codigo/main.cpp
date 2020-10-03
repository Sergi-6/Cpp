#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{

    int opcion;

        cout << "********************\n   MENU DE JUEGOS\n********************\n\nSeleccione un juego\n\n1 - StarShip\n2 - Snake\n\nIngrese un numero del menu para seleccionar un juego:\n"; 
        cin >> opcion;

        switch (opcion)
        {
        case 1: 
            system("cls");
            starShip();            
            break;
        case 2:
            system("cls");
            snake();
            break;
        
        default:
            system("cls");
            cout << "Gracias por usar este menu!!\n";
            break;

        }
        
    return 0;
}
