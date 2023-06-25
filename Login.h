#include <iostream>

using namespace std ; 

void registro(string nombre , string correo , string contraseña){
        bool bandera = true ; 
        string correo2 ;
        string contraseña2;
        cout<< "nombres y correos registrados con exito " << endl ; 
        while (bandera) {
        cout << "ingresa sesion " << endl; 
        cout << "Ingresa nombre de tu correo  -> " ; 
        cin >> correo2 ; 
        cout << "ingresa tu contraseña -> "; 
        cin >> contraseña2;   
        if(correo2 == correo && contraseña2 == contraseña ) {
            cout << "Hola " << nombre << endl ; 
            bandera = false ; 
        }
        else if (correo2 != correo && contraseña2 == contraseña){
            cout << "Correo -> " << correo2 << "No valido " << endl ; 
        }
        else if (correo2 == correo && contraseña2 != contraseña){
            cout << "Contraseña -> " << contraseña2 << "No valido " << endl ; 
        }else {
            cout << "Correo y contrseñas invalidos " << endl ; 
        }
         
        }
    

}
