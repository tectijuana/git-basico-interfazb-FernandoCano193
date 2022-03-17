#include <iostream>
#include <cstdlib>

/*
    Ejercicio 2
    Introducir un entero positivo N requerido por N 
    números del seguro social (NIMSS). Cada NIMSS se 
    introducirá en tres partes: un número de tres digitos
    seguido por uno de dos y este por uno de cuatro. desplegar
    la lista de los NIMSS como número de nueve dígitos
*/
//@Autor    FernandoCano193
//@Fecha    16/03/2022

using namespace std;

void GeneradorNumeros(int nRequeridos) //Inicio de función GeneradorNumeros que recibe como parametro el número de NIMSS requeridos
{
    for(int i=1;i<=nRequeridos; i++)
    {
        cout<<i<<".- "<<100 + rand() % 900<<10 + rand() % 90<<1000 + rand() % 9000<<endl; //Generador de números 
    }
}

int main()
{
    int n=0;

    cout<<"Ingresa el numero de NIMSS requeridos: ";
    cin>>n;

    cout<<"\nNIMSS\n";
    GeneradorNumeros(n); //Invocación de la funcion generadora de NIMSS

    return 0;
}