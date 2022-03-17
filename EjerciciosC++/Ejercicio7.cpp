#include <iostream>

/*
    Ejercicio 7

    Desplegar el patron:
    100101
    100001
    011101
    Enseguida, cambiar la dimension de 3 por 6 
    a 6 por 3 e desplegar nuevamente
*/
//@Autor    FernandoCano193
//@Fecha    16/03/2022

using namespace std;

int main()
{
    int patron[3][6]={{1,0,0,1,0},{1,0,0,0,0,1},{0,1,1,1,0,1}}; //Inicializacion del la matriz con los valores del patron

    cout<<"PATRON 3 X 6 \n\n";
    for(int i=0; i<3;i++) //Ciclos for para desplegar el patron 3 x 6
    {
        for(int j=0;j<6;j++)
        {
            cout<<patron[i][j];
        }
        cout<<endl;
    }

    cout<<"\nPATRON 6 X 3\n\n";
    for(int i=0; i<6;i++) //Ciclo for para desplegar el patron 6 x 3
    {
        for(int j=0;j<3;j++)
        {
            cout<<patron[j][i];
        }
        cout<<endl;
    }
    return 0;
}