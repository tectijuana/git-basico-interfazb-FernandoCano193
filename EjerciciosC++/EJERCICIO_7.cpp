#include <iostream>
#include <cstdlib>

/**
 * Problema 7
 * 
 * Encontrar el promedio de 1,000 números tomados al azar.
 * 
 */

//@Autor    FernandoCano193
//@Fecha    14/03/2022

using namespace std;

double Promedio(int* num)//Inicia funcion Promedio que recibe como parametro el arreglo
{
    int aux;

    for(int i=0;i<1000;i++)//Inicia ciclo for donde se le asigna un valor random y se suma el total de los numeros
    {
        num[i]=0 + rand() % 10;
        aux+=num[i];
    }

    double Resultado=(double)aux/1000; //Se calcula el promedio de los 1000 números

    return Resultado;
}


int main()
{
    int Num[1000];//Se declara el arreglo

    cout<<"El promedio es: "<<Promedio(Num)<<endl; //Se imprimen resultados
    return 0;
}