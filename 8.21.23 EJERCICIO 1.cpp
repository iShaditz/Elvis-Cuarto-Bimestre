#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	//para almacenar las filas y columnas
	int columna, fila;
	
	cout<<"Ingrese la cantidad de columnas a usar: ";
	
	cin>> columna;
	
	cout<<"Ingrese la cantidad de filas a usar: ";
	
	cin>> fila;
	
	//declaramos la matriz
	int mat[columna][fila];
	
	for(int i = 0; i < columna; i++){
		for(int j = 0; j < fila; j++){
		
		cout<< "Ingrese un numero para almacenar en la posicion " << i + 1<< ", " << j + 1 << ": ";
		
		cin>> mat[i][j];
		
    	}	
	}
	
	int maxsuma = 0, filamaxima = 0;
	
	for(int k = 0; k < columna; k++ ){
		
		int sumafila = 0;
		
		for(int l = 0; l < fila; l++ ){
			
			sumafila = sumafila + mat[k][l];
		
		}
		
		if(sumafila>maxsuma){
			
			maxsuma = sumafila;
			filamaxima = k;
			
		}
		
	}
	
	//imprimir 
	
	cout<< "\n Imprimiendo matriz...\n";
	
	for(int i = 0; i < columna; i++){
		for(int j = 0; j < fila; j++){
		
		cout<< mat[i][j] << " ";
		
    	}	
    	
    	cout<<"\n";
	}
	
	cout<< "La fila " << filamaxima + 1 << " tiene una suma de " << maxsuma;
	
	int Ceros = 0, Positivos = 0, Negativos = 0;

    for (int i = 0; i < columna; i++) {
    	
        for (int j = 0; j < fila; j++) {
        	
            if (mat[i][j] == 0) {
            	
                Ceros++;
                
            } else if(mat[i][j] > 0) {
            	
                Positivos++;
                
            } else {
            	
                Negativos++;
                
            }
        }
    }
    
    cout << endl;
    
    cout << "Numero de ceros: " << Ceros << endl;
    
    cout << "Numero de positivos: " << Positivos << endl;
    
    cout << "Numero de negativos: " << Negativos << endl;
	
	return 0;
	
}
