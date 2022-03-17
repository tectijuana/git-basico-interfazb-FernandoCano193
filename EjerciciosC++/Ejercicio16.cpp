
#include <iostream>

/**
 * Ejercicio 16
 * 
 * La familia Wilson salió de vacaciones la semana pasada.
 * Recorrió 440 km el lunes, 0 el martes, 100 el miercoles, 320 el jueves
 * y 40 el viernes. Determinar la distancia viajada en promedio diario.
 */

//@Autor    FernandoCano193
//@Fecha    16/03/2022

using namespace std;

//Incia la clase DistanciaPromedio
class DistanciaPromedio{

    //Se declaran variables double las cuales representan las distancias
    double L, M, Mi, J, V;

    //Se incializan la variables dentro del constructor
    public:
    DistanciaPromedio(double Lun, double mart, double mier, double juev, double vier)
    {
        L=Lun;
        M=mart;
        Mi=mier;
        J=juev;
        V=vier;
    }

    public:
    double Promedio()//Dentro de la función Promedio se realizan los cálculos para determinar el promedio, retornando Resultado
    {
        double Resultado;
        Resultado=(L+M+Mi+J+V)/5;
        return Resultado;
    }

    public:
    void DespliegueProblema()//Funcion que muestra una tabla en la consola para poder visualizar los datos.
    {
        cout<<"Distancia recorridas en la semana (KM)"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Lunes: "<<L<<endl;
        cout<<"Martes: "<<M<<endl;
        cout<<"Miercoles: "<<Mi<<endl;
        cout<<"Jueves: "<<J<<endl;
        cout<<"Viernes: "<<V<<endl;
    }
        
};

int main()
{
    double DistPromedio;
    
    //Se crea el objeto mandando como parametros los valores ya establecidos en el problema.
    DistanciaPromedio DP(440,0,100,320,40);

    //Se invocan las funciones
    DP.DespliegueProblema();
    DistPromedio= DP.Promedio();

    //Se despliega el resultado
    cout<<"\nRESULTADO: "<<DistPromedio<<" Km diarios en promedio"<<endl;

return 0;

}