#include <iostream>

using namespace std;
/**
 * Ejercicio 10 
 * 
 * Un sindicato de boston recibe cinco nuevos miembros
 * que deben ser entrenados para cinco trabajos disponibles.
 * ¿En cuántas diferentes combinaciones pueden colocarse los
 * trabajadores en los diversos trabajos?
 */

//@Autor    FernandoCano193
//@Fecha    16/03/2022

int Permutacion(int n, int r)//Inicio de la función Permutacion
{
    int Resultado=1;

    for(int i=1;i<=n;i++) //Ciclo donde se calcula la permutacion
    {
        Resultado*=i;
    }
    return Resultado;
}
int main()
{
    int N=5, R=5; //Declaracion de las variables con la asignación de los valores definidos en el problema
    cout<<"Combinaciones diferentes: "<<Permutacion(N,R); //Despliegue de resultados
    return 0;
}