#include <iostream>

/*
    Ejercicio 5

    Calcular la media, mediana y moda del siguiente
    conjunto de valores: 153,158,161,157,150,153,149,
    153,155,162
*/

//@Autor    FernandoCano193
//@Fecha    14/03/2022

using namespace std;

double Media(int* V)//Inicia función Media, recibe arreglo como parametro
{
    double resultado, aux;

    for(int i=0;i<10;i++)
    {
        aux+=V[i];//Suma de los valores
    }

    return resultado=aux/10;//Calculo de la media
}

void Mediana(int* V)//Inicia función Mediana, recibe arreglo como parametro
{
    int num1, num2;
    
    int posicion=10/2;
    num1=V[posicion];
    num2=V[posicion-1];

    cout<<"La mediana son: "<<num1<<" y "<<num2<<endl;//Se imprimen los valores ubicados en la mediana del arreglo
}
int Moda(int*V)//Inicia función Moda, recibe como parametro el vector
{
    int cont1=0, cont2=0, Resultado;

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(V[i]==V[j] && i!=j) cont1++; //Realiza la comparacion entre los valores del arreglo
        }

        if(cont1>cont2)
        {
            cont2=cont1;
            Resultado=V[i];
        }

        cont1=0;
    }

    return Resultado; //Retorna resultado
}
void Impresion(int* V)
{
    for(int i=0;i<10;i++)
    {
        cout<<V[i]<<" ";
    }
}
int main()
{
    int Valores[]={153,158,161,157,150,153,149,153,155,162};//Declara el arreglo con los valores definidos por el problema

    cout<<"------------------VALORES----------------------"<<endl;
    Impresion(Valores);
    cout<<"\n-----------------------------------------------"<<endl;

    cout<<"La media es: "<<Media(Valores)<<endl; //Invocación de la función Media
    
    Mediana(Valores); //Invocacion de la función Mediana

    cout<<"La moda es: "<<Moda(Valores)<<endl; //Invocacion de la función Moda
    
    return 0;
}