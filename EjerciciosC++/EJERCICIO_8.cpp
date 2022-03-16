#include <iostream>

/**
 * Problema 8
 * 
 * La clase de Ecología tiene cinco estudiantes que
 * obtuvieron las siguientes notas en el examen final:
 * 75,93,41,98 y 71. El profesor desea calcular el 
 * promedio de las notas. Escribir un programa para 
 * realizar el cálculo.
 * 
 */

//@Autor    FernandoCano193
//@Fecha    10/03/2022


using namespace std;

double PromedioNotas(int* arreglo)//Inicia la función PromedioNotas recibiendo como parametros el arreglo de calificaciones.
{
    //Declaracion de variables auxiliares
    int aux=0;
    double Resultado;

    //Ciclo for para la suma de las calificaciones
    for(int i=0;i<5;i++)
    {
        aux+=arreglo[i];
    }

    //Calculo del promedio
    Resultado=(double) aux/5;

    return Resultado;
}
int main()
{
    int calif[5]={75,93,41,98,71}; //Declaración del arreglo con las calificaciones ya definidad

    cout<<"CALIFICACIONES REGISTRADAS: 75, 93, 41, 98, 71\n"<<endl;
    cout<<"PROMEDIO DE LAS CALIFICACIONES:"<<endl;
    cout<<"-------"<<PromedioNotas(calif)<<"---------"<<endl; //Invocación de la función PromedioNotas y despliegue de resultados
    return 0;
}