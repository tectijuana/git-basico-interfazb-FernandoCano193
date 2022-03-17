#include <iostream>
#include <math.h>

/*
    Ejercicio 6

    Generar X números de dos digitos al azar
    e desplegar todos los numeros menores a su edad,
    donde X y su edad sean entradas
*/

//@Autor    FernandoCano193
//@Fecha    16/03/2022

using namespace std;

void GeneradorNumeros(int x) //Función encargada de generar los numeros recibiendo la cantidad de números a generar
{
    for(int i=1;i<=x;i++)
    {
        cout<<i<<".- "<<10 + rand() % 90<<endl; //Generacion de números de dos digitos
    }
}

void NumerosMenoresEdad(int edad) //Función encargada de desplegar los numeros menores a la edad ingresada
{
    for(int i=edad-1; i>0;i--)
    {
        cout<<i<<endl;
    }
}
int main()
{
    int X, edad;

    cout<<"Ingrese la cantidad de numeros que desea generar: "; //Peticion de la cantidad de numeros a generar
    cin>>X;
    cout<<"Ingrese su edad: "; //Petición de la edad
    cin>>edad;

    cout<<"\nNUMEROS GENERADOS\n";
    GeneradorNumeros(X); //Invocacion de la función generadora de números

    cout<<"\nNUMEROS MENORES A SU EDAD\n";
    NumerosMenoresEdad(edad); //Invocacion de la funcion encargada de desplegar numeros menores a la edad
    return 0;
}