#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char palabra[20];
	
	cout << "Ingrese una cadena: ";
	
	gets(palabra);
	
	int longitud = strlen(palabra);
	
	if(longitud > 10){
	
	cout<< "\n" << palabra;
	
	}
	
	return 0;
	getch();
}
