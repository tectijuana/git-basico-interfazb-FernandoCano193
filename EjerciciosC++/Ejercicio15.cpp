#include <iostream>
#include <array>
#include <vector>

/**
 * Ejercicio 15
 * 
 * Se registraron las siguientes calificaciones en un examen de admisión en 
 * Matemáticas: 83,74,69,100,92,95,89,75,92,82,85,97,74,91,78,83,61,100,93,
 * 54,87,82,79,68,72,75,86,92,53,100,99,67,97,79,82,81,85,98,99.
 * Determinar y mostrar en pantalla la mediana de las calificaciones.
 * Mostrar en pantalla támbien las calificaciones en orden descendente.
 */

//@Autor    FernandoCano193
//@Fecha    16/03/2022

using namespace std;

//Inicio de la clase MedianaCalificaciones.
class MedianaCalificaciones{

    int* arreglo;

    public:
    MedianaCalificaciones(int* Calif) //Creación del constructor que recibe un arreglo como parametro, se inicializa la variable arreglo
    {
        arreglo=Calif;
    }

    public:
    int Mediana() //Funcion Mediana que hace los calculos necesarios para regresar el valor de la mediana.
    {
        int Posicion=39/2;
        int Mediana=arreglo[Posicion-1];
        return Mediana;
    }

    public:
    void OrdenDesc() //Funcion que realiza el ordenamiento de los elementos a traves del método burbuja
    {
        int aux;
        for(int i=0; i<39;i++)
        {
            for(int j=0;j<39;j++)
            {
                 if(arreglo[j]<arreglo[j+1])
                {
                    aux=arreglo[j];
                    arreglo[j]=arreglo[j+1];
                    arreglo[j+1]=aux;
                }
            }
        }

        cout<<"\nCALIFICACIONES ORDENADAS DE MANERA DESCENDENTE."<<endl; //Se despliegan los valores
        for(int i=0;i<39;i++)
        {
            cout<<i+1<<".- "<<arreglo[i]<<endl;
        }

    }
};

int main()
{
    //Inicializa el arreglo con las calificaciones ya establecidad por el problema
    int CaliMatematicas[]={83,74,69,100,92,95,89,75,92,82,85,97,74,91,78,83,61,100,93,54,87,82,79,68,72,75,86,92,53,100,99,67,97,79,82,81,85,98,99};

    //Se instancia al objeto MC de la clase MedianaCalificaciones
    MedianaCalificaciones MC(CaliMatematicas);

    //Se invoca a la funcion Mediana()
    int M=MC.Mediana();

    //Se desplega el valor de la Mediana
    cout<<"MEDIANA DE CALIFICACIONES: "<<M<<endl;

    //Se invova a la funcion OrdenDesc()
    MC.OrdenDesc();

    return 0;
}