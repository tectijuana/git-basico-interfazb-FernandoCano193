#include <iostream>
//Librerias necesarias
#include <math.h>
#include <iomanip>

/*
    Ejercicio 1

    Si se arrojan dos monedas perfectas, la probabilidad
    de obtener dos aguilas sería 1/4. Si este experimento
    se repite 10 veces, la probabilidad de obtener dos aguilas
    K veces es exactamente:

    Calcular una tabla de valores de esta probabilidad para K=0,1,2...10
    y determina que valor de k es el más probable.
*/

//@Autor    FernandoCano193
//@Fecha    15/03/2022

using namespace std;

void TablaProbabilidad(int V) //Inicio de la función TablaProbabilidad, recibe el número de intentos
{
    float probabilidad[11]; //Declaración del arreglo donde se almacenarán los valores de la probabilidad
    float ProbMax;

    cout<<"Veces que se obtendra \ndos aguilas (K)\t|";
    cout<<"\tProbabilidad\n";
    int Max=probabilidad[0];

    for(int j=0;j<=V;j++) //Ciclo donde se calcula las probabilidades y se genera la tabla 
    {
        probabilidad[j]=(pow((float)1/4,j))*(pow((float)3/4,10-j));
        cout<<j<<"\t\t|\t"<<fixed<<setprecision(6)<<probabilidad[j]<<endl;

        if(Max>probabilidad[j])// Condición que determina el valor de la probabilidad max
        {
            Max=j;
            ProbMax=probabilidad[j];
        }
    }

    cout<<"\nValor de K mas probable: "<<Max;
}

int main()
{
    int Veces=10; //Variable inicializada con los intentos proporcionados por el problema.
    TablaProbabilidad(Veces);//Invocacion de la función TablaProbabilidad
    return 0;
}