#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int fila, columna;	
	
	cout << "Ingrese la cantidad de filas: " << endl;
	
	cin >> fila;
	
	cout << "Ingrese la cantidad de columnas: " << endl;
	
	cin >> columna;
	
	//declarada mi matriz
	
	int mat[fila][columna];
	
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < columna; j++){
			
			cout << "Ingrese el dato de la posicion " << i+1 <<", "<< j+1 << ": " <<endl;
			
			cin >> mat[i][j];
		}
	}
	
	cout << "MATRIZ ORIGINAL" << endl;
	
	for(int k = 0; k < fila; k++){
		for(int l = 0; l < columna; l++){
			
			cout << mat[k][l] << " ";
			
		}	
		cout << endl;
	}
	
	cout << "MATRIZ EN DIAGONAL" << endl;
	
	for(int m = 0; m < fila; m++){
		
			cout << mat[m][m] << ", ";
				
	}
	
	return 0;
	getch();
}
