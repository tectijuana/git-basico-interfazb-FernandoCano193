#include <iostream>
#include <math.h>
#include <iomanip>

/*
    Ejercicio 1
    
    Encontrar el valor de X^4-8x^2-14x+7 para 
    x=2,4,6,8,...,40.
*/

//@Autor    FernandoCano193
//@Fecha    16/03/2022

using namespace std;

void CalculoX() //Inicio de la función que se va encargar de calcular X
{
    double resultado;
    int x=2;
    while(x<=40)
    {
        resultado=(double)(pow(x,4)-(8*pow(x,2))-14*x+7); //Se realiza los calculos de la ecuación sustituyendo x
        cout<<"x= "<<x<<" = "<<fixed<<setprecision(1)<<resultado<<endl; //Se muetran los resultados
        x+=2;
    }
}
int main()
{
    CalculoX(); //Se invoca la función
    return 0;
}