#include <iostream>
#include "Modulo.h"
#include "portada.h"
#include "Login.h"
#include "registro.h"

using namespace std ; 

int main(){
    string nombre2;
    int op ; 
    string correo2;
    string contraseña; 
    string peso ; 
    string altura ; 
    bool bandera = true; 

    while (bandera){

    porta();  
    cout << "Hola bienvenido al progrma de calculo de indice de masa corporal (IMC)"<< endl ; 
    cout << "¿ Eres nuevo Usuario ?" << endl; 
    cout << " 1 -> si \n 2 -> no \n 3 -> salir " << endl ; 
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
        cout << "Ahoa empezemos a llevar tu ficha " << endl ; 
        cout << "Ingresa tu altura -> " ; 
        cin >> altura ; 
        cout << "Ingresa tu peso -> " ; 
        cin >> peso ; 
        cout << " Muchas gracias FICHA LLENADA CON EXITO "<< endl ; 
        persona_registrada(nombre2,correo2,altura,peso,contraseña); 
        modulo();  // todo ahora aqui calculara el imc de la persona registrada y tiene que retornarnar un resultado pero conociendo a mi papa lo quiere en una tabla bien mamamona 
        break;
        case2 : 
        break;
        case 3 : 
        bandera = false ; 
        break;
    
        default:
        break;
    }



    }
    

    return 0 ; 
}