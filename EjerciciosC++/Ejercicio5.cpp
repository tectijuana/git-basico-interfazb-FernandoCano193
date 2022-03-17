#include <iostream>
#include <math.h>

/*
    Ejercicio 5

    Escribir un programa que despliegue 40 enteros
    K, seleccionados al azar, siendo -100 < K < 100
*/

//@Autor    FernandoCano193
//@Fecha    16/03/2022

using namespace std;

int main()
{
    cout<<"40 enteros seleccionados al azar: \n"<<endl;
    
    for(int i=1; i<=40; i++) //Cilco for donde se generan los 40 números
    {
        cout<<i<<".- "<<-100 + rand() % 200<<endl; //despliegue de los numeros
    }
    return 0;
}