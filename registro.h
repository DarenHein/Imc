// todo aqui va estar las gentes que se vallan registrando y mas aparte los que vamos ir registrando solo dejaremos uno regitrados lo are con nodos 
#include <iostream>
using namespace std; 

struct Nodo
{
    /* data */
    string nombre ; 
    string correo ; 
    string altura ; 
    string peso ; 
    string contraseña ; 
    Nodo* siguiente; 
};


void persona_registrada(string nombre , string correo , string altura , string peso , string contraseña){ 

    // todoo creacion de los nodos 
    Nodo* nodo = new Nodo(); 
    nodo->nombre = nombre; 
    nodo->correo = correo ; 
    nodo->altura = altura ; 
    nodo->peso  = peso ;  
    nodo->contraseña = contraseña; 

    cout <<"Nombre -> " << nodo->nombre << endl ; 
    cout <<"Correo -> " <<nodo->correo  << endl ; 
    cout <<"Contraseña -> ******" << endl ; 
    cout <<"Peso -> " <<nodo->peso << endl ; 
    cout <<"Altura -> " <<nodo->altura << endl ; 
    

    




}