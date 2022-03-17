#include <iostream>
/*
    Ejercicio 12

    Encontrar la inversión promedio en el banco
    si la libreta registro los siguientes valores el 
    primer día de cada año: $1000, $1040, $1081.60, $1124.86
*/

//@Autor    FernandoCano193
//@Fecha    16/03/2022

using namespace std;

double promedio(double* V) //Inicia función promedio que recibe como parametro el arreglo
{
    double aux,resultado;

    for(int i=0; i<4;i++) //Ciclo for utilizado para sumar los valores del arreglo
    {
        aux+=V[i];
    }

    return resultado=aux/4; //Retorno y calculo del promedio
}

int main()
{
    double Valores[4]={1000,1040,1081.60,1124.86}; //Declaracion del arreglo con los valores definidos en el problema

    cout<<"Inversión promedio: "<<promedio(Valores); //Despliegue de los resultados.
    return 0;
}