#include <iostream>
#include "Modulo.h"
#include "portada.h"
#include "Login.h"

using namespace std ; 

int main(){
    string nombre2;
    int op ; 
    string correo2;
    string contraseña; 

    porta();  
    cout << "Hola bienvenido al progrma de calculo de indice de masa corporal (IMC)"<< endl ; 
    cout << "¿ Eres nuevo Usuario ?" << endl; 
    cout << " 1 -> si \n 2 -> no " << endl ; 
    cout << "Digita tu opcion -> " ; 
    cin >> op ; 
    switch (op)
    {
        case 1 : 
        cout << "Registro " << endl ; 
        cout << "Ingresa tu nombre -> "; 
        cin >> nombre2 ; 
        cout << "ingresa tu correo electronico -> " ; 
        cin >> correo2 ;
        cout << "Crea una contraseña -> "; 
        cin >> contraseña; 
        registro(nombre2,correo2,contraseña); 
        modulo(); 
        break;
        case2 : 
        break;
    
        default:
        break;
    }
    

    return 0 ; 
}