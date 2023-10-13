#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    const int Alumnos = 5;
    
    const int Calificaciones = 7;

    double calificaciones[Alumnos][Calificaciones];
    
    double promedios[Alumnos];

    for (int i = 0; i < Alumnos; i++) {
        cout << "Ingrese las 7 calificaciones del alumno " << i + 1 << ":" << endl;
        
        double suma = 0;
        
        for (int j = 0; j < Calificaciones; j++) {
            cout << "Calificacion " << j + 1 << ": ";
            cin >> calificaciones[i][j];
            
            suma += calificaciones[i][j];
        }
        
        promedios[i] = suma / Calificaciones;
    }

    cout << "\nPromedios finales y mensajes correspondientes:" << endl;

    for (int i = 0; i < Alumnos; i++) {
        cout << "El alumno " << i + 1 << " " << "obtuvo un promedio de: " << promedios[i] << " - ";

        if (promedios[i] == 100) {
            cout << "Excelente!";
        } else if (promedios[i] >= 90 && promedios[i] <= 99) {
            cout << "Muy bien";
        } else if (promedios[i] >= 80 && promedios[i] <= 89) {
            cout << "Bien";
        } else if (promedios[i] >= 70 && promedios[i] <= 79) {
            cout << "Hay que mejorar";
        } else {
            cout << "Reprobado";
        }

        cout << endl;
    }

    return 0;
}
