#include <iostream>

/*
    Ejercicio 2
    Un estudiante tiene cuatro libros de Algebra,
    tres de ingles y dos de historia de los EE. UU.
    Desea guardar todos sus libros del mismo género
    en su anaquel. ¿De cuantas maneras pueden arreglarse
    los libros?
*/
//@Autor    FernandoCano193
//@Fecha    15/03/2022

using namespace std;

int PermutacionesLibro(int NLibros) //Inicio de la función PermutacionesLibros recibiendo el número de Libros
{
    int Resultado=1;

    for(int j=1; j<=NLibros;j++) //Ciclo for donde se realiza los calculos de la permutación
    {
        Resultado+=j;
    }

    return Resultado;
}

int main()
{
    int A=4,I=3,H=2; //Declaración de las variables con los valores establecidos en el problema

    //Impresiones de los resultados
    cout<<"Maneras que pueden arreglarse los libros.\n";
    cout<<"Libros de Algebra: "<<PermutacionesLibro(A)<<endl;
    cout<<"Libros de Ingles: "<<PermutacionesLibro(I)<<endl;
    cout<<"Libros de Historia de EE. UU.: "<<PermutacionesLibro(H)<<endl;

    cout<<"\nTotal de maneras posibles en que se pueden arreglar: "<<PermutacionesLibro(A)*PermutacionesLibro(I)*PermutacionesLibro(H)<<endl;
    return 0;
}