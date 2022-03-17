#include <iostream>

/*
    Ejercicio 4
    
    En el villancico “los 12 días de Navidad”, se
    distribuyen regalos a la cantante de acuerdo
    al siguiente orden: el primer día recibe una
    perdiz en un árbol de peras; el segundo, dos
    tórtolas y una perdiz en un árbol de peras; el
    tercero, tres pollitas, dos tórtolas y una perdiz
    en un árbol de peras. Al cabo del día doceavo,
    recibió 12+11+...+ 2 + 1 regalos. ¿Cuántos
    regalos fueron en total?
*/
//@Autor    FernandoCano193
//@Fecha    16/03/2022

using namespace std;


int SumaRegalos()
{
    int Resultado;
    for(int i=1;i<=12;i++)//Calculo de la suma de regalos
    {
        Resultado+=i;
    }
    return Resultado; //retorno del resultado
}
int main()
{
    cout<<"Total de regalos: "<<SumaRegalos();//Impresion del resultado junto con la invocación
    return 0;
}
