#include <iostream>

/*
    Ejercicio 9

    ¿De cuantas maneras diferentes se pueden colocar
    doce llaves en un llavero circular?
*/

//@Autor    FernandoCano193
//@Fecha    16/03/2022

using namespace std;

int Permutacion(int n)//Inicio función Permutacion que recibe como parametro el número de llaves
{
    int Resultado=1;

    for(int i=1;i<=n;i++)//Ciclo que realiza la permutación
    {
        Resultado*=i;
    }
    return Resultado; //Retorno del resultado
}
int main()
{
    int N=12; //Declaración de la variable con los valores definidos por el problema

    cout<<"Maneras diferentes de colocar 12 llaves: "<<Permutacion(N); //Despliegue de los resultados.
    return 0;
}