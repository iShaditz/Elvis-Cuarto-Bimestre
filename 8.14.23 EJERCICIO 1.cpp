#include <iostream>

using namespace std;

int main(){
	
	int Bloque1[5];
	int Bloque2[5];
	int multiplicacion;
	
	for(int i = 0; i < 5; i++){ //ciclo que almacena el bloque 1 (5 numeros)
		
		cout << "Ingrese el numero no." <<i+1 <<": " <<endl;
		
		cin >> Bloque1[i];
	}
	
	cout << "Vector Original: " << endl;
	
	for(int o = 0; o < 5; o++){ //ciclo que imprime los datos originales
	
		cout << Bloque1[o] << "|";
		
	}
	
	cout << endl;
	
	cout << "Vector Multiplicado: " << endl; 
	
		for(int j = 0; j < 5; j++){ //ciclo que imprime los datos multiplicados por 2
		
		multiplicacion = Bloque1[j] * 2;
		
		cout << multiplicacion << "|";
	}
	
	return 0;
}
