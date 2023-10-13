#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
    // Declarar las variables
    
    string nombres[20];
    
    int a;
    
    string dato;
    
    char band = 'F';
    
    //solicitar datos
	
	cout << "ingrese cuantos nombres quiere ingresar: ";
		
	cin >> a;
	
	for(int i = 0; i < a; i++){
		
	 cout << "Ingrese el nombre: ";
    
     cin >> nombres[i];
		
	}

    // Solicitar que ingrese el nombre a buscar
    
    cout << "Ingrese el nombre a buscar: ";
    
    cin >> dato;

    // Algoritmo de búsqueda secuencial
    
    int j = 0;
    
    while ((band == 'F') && (j < a)) {
    	
        if (dato == nombres[j]) { 
        
            band = 'V';
            
        }
        
        j++;
        
    }

    if (band == 'F') {
    	
        cout << "\nEl nombre no se encontro en la lista";
        
    } else if (band == 'V') {
    	
        cout << "El nombre " << dato << " si esta en la lista ";
        
    }

    getch();
    return 0;
}
