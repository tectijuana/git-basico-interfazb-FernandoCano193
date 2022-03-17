#include <iostream>
#include <string>
/*
    Ejercicio 4
    Arreglar un conjunto de tres números en orden
    descendente. por ejemplo, para los valores 12, -7, 32
    Desplegar 32, 12, -7
*/
//@Autor    FernandoCano193
//@Fecha    16/03/2022

using namespace std;
void ordendes(int* arreglo) //Funcion que recibe el arreglo como parametro y es el ecargado de ordenarlos números 
{
    int aux=0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arreglo[j]<arreglo[j+1])
            {
                aux=(int)arreglo[j];
                arreglo[j]=(int)arreglo[j+1];
                arreglo[j+1]=(int)aux;
            }
        }
    }
    for(int x=0;x<3;x++)
    {
        cout<<"\n"<<(signed)arreglo[x]<<endl;
    }
}
int main()
{
    int arreglo[]={-7,12,32};

    ordendes(arreglo);//Invocacion de la funcion mandando como parametro el arreglo
    return 0;
}