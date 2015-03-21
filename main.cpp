
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
using namespace std;

class Nodo
{
public:
    int dato;
    vector<Nodo*> adjacentes;

    Nodo(int dato)
    {
        this->dato = dato;
    }
};

int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las columnas y las filas se representan en el arreglo de la siguiente manera: [columnas][filas]
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Devuelve la distancia (o peso) de una arista dado sus dos nodos (inicio y destino)
//Nota: se sugiere NO usar recursion
int obtenerDistanciaAristaDirecta(int grafo[5][5], int inicio, int destino)
{
    int distancia=grafo[inicio][destino];//Gurdamos el peso directo en una variable
    return distancia;//mostramos el peso
}

//Dado un grafo y un nodo inicial. Devuelve un vector ordenado que contenga todos los nodos adjacentes al nodo inicial.
//Ejemplo:
//Dado el siguiente grafo y el nodo inicial 2
//http://visualgo.net/dfsbfs.html
//Devuelve el siguiente vector: {0,1,3}
vector<int> obtenerListaDeAristas(int grafo[5][5], int inicio)
{
    vector<int> respuesta;
    return respuesta;
}

//Devuelve verdadero si existe al menos un camino para llegar desde el nodo inicio hasta el nodo destino dada una profundidad maxima de recorrido
//Nota: se sugiere usar recursion
bool existeCamino(int grafo[5][5], int inicio, int destino,int profundidad)
{
       if(profundidad<0) // Caso base no hay profundidad
        return false;

    for(int i=0;i<5;i++){//Ciclo para recorrer la profudidad del grafo
    if(grafo[inicio][destino]!=infinito){ // Verifiacion del camino
             if(existeCamino(grafo,i,destino,profundidad-1))//mientras queden niveles de profundidad, seguimos comprobando mediante recursividad
                    return true;}}
}

int main ()
{
    evaluar();

    return 1;
}
