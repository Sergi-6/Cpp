#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int ahorcado(){

    char frase[60],rep[100],temporal[100];
    char pal;
    int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=9;
    int repetido=0,gano=0;
    cout << "  **  JUEGO DEL AHORCADO  **\n\n Introduzca la palabra a adivinar: ";
    cin >> frase;
    system("cls");
    longitud = 0;
    inicial = 0;
    j = 0;
    rep[0] = ' ';
    rep[1] = '\0';
    do
    {
        system("cls");
        temp=0;
        if(inicial == 0)
        {
            for(i=0;i<strlen(frase);i++)
            {
                if(frase[i] == ' ')
                {
                    temporal[i] = ' ';
                    longitud++;
                }
                else
                {
                    temporal[i] = '_';
                    longitud++;
                }
            }
        }
        inicial = 1;
        temporal[longitud] = '\0';
        for(i=0;i<strlen(rep);i++)
        {
            if(rep[i] == pal)
            {
                repetido = 1;
                break;
            }
            else
           {
               repetido = 0;
           }
        }
        if(repetido == 0)
        {
            for(i=0;i<strlen(frase);i++)
            {
                if(frase[i] == pal)
                {
                    temporal[i] = pal;
                    acertado++;
                    temp=1;
                }
            }
        }
        if(repetido == 0)
        {
            if(temp == 0)
            {
                oportunidades = oportunidades - 1;
            }
        }
        else
        {
            cout << " Ya se ha introducido este caracter\n\n";
        }
        for(i=0;i<strlen(temporal);i++)
        {
            cout << " " << temporal[i];
        }
        cout << "\n";
        if(strcmp(frase,temporal) == 0)
        {
            gano = 1;
            break;
        }
        cout << "\n  Letras Acertadas: " << acertado;
        cout << "\n  Oportunidades Restantes: " << oportunidades;
        cout << "\n";
        rep[j] = pal;
        j++;
        if (oportunidades==0)
        {
           break;
        }
        cout << " Introduzca una letra: \n";
        cin >> pal;
    }
    while(oportunidades != 0);
    if(gano)
    {
        cout << "\n\n  Enhorabuena, has ganado!!";
    }
    else
    {
        cout << "\n\n  Has perdido!!";
    }
    cout << "\n\n";
    system("PAUSE");

    return 0;
}


