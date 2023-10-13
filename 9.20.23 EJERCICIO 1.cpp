#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Empleado {
    string nombre;
    string identificacion;
    double salario;
};

int main() {
    vector<Empleado> empleados;

    while (true) {
        cout << "Opciones:" << endl;
        cout << "a. Ingresar los datos de un empleado" << endl;
        cout << "b. Encontrar y mostrar el empleado con el salario mas alto" << endl;
        cout << "c. Encontrar y mostrar el empleado con el salario mas bajo" << endl;
        cout << "d. Buscar un empleado por nombre o identificacion y mostrar sus datos si se encuentra" << endl;
        cout << "e. Salir del programa" << endl;
        cout << "Seleccione una opcion: ";

        char opcion;
        cin >> opcion;

        if (opcion == 'a' || opcion == 'A') {
            Empleado empleado;
            cout << "Ingrese el nombre del empleado: ";
            cin >> empleado.nombre;
            cout << "Ingrese la identificacion del empleado: ";
            cin >> empleado.identificacion;
            cout << "Ingrese el salario del empleado: ";
            cin >> empleado.salario;
            empleados.push_back(empleado);
        } else if (opcion == 'b' || opcion == 'B') {
            if (!empleados.empty()) {
                Empleado empleadoMasAlto = empleados[0];
                for (int i = 1; i < empleados.size(); i++) {
                    if (empleados[i].salario > empleadoMasAlto.salario) {
                        empleadoMasAlto = empleados[i];
                    }
                }
                cout << "Empleado con el salario mas alto:" << endl;
                cout << "Nombre: " << empleadoMasAlto.nombre << endl;
                cout << "Identificacion: " << empleadoMasAlto.identificacion << endl;
                cout << "Salario: " << empleadoMasAlto.salario << endl;
            } else {
                cout << "No hay empleados registrados." << endl;
            }
        } else if (opcion == 'c' || opcion == 'C') {
            if (!empleados.empty()) {
                Empleado empleadoMasBajo = empleados[0];
                for (int i = 1; i < empleados.size(); i++) {
                    if (empleados[i].salario < empleadoMasBajo.salario) {
                        empleadoMasBajo = empleados[i];
                    }
                }
                cout << "Empleado con el salario mas bajo:" << endl;
                cout << "Nombre: " << empleadoMasBajo.nombre << endl;
                cout << "Identificacion: " << empleadoMasBajo.identificacion << endl;
                cout << "Salario: " << empleadoMasBajo.salario << endl;
            } else {
                cout << "No hay empleados registrados." << endl;
            }
        } else if (opcion == 'd' || opcion == 'D') {
            if (!empleados.empty()) {
                string clave;
                cout << "Ingrese el nombre o la identificacion del empleado a buscar: ";
                cin >> clave;

                bool encontrado = false;

                for (int i = 0; i < empleados.size(); i++) {
                    if (clave == empleados[i].nombre || clave == empleados[i].identificacion) {
                        cout << "Empleado encontrado:" << endl;
                        cout << "Nombre: " << empleados[i].nombre << endl;
                        cout << "Identificacion: " << empleados[i].identificacion << endl;
                        cout << "Salario: " << empleados[i].salario << endl;
                        encontrado = true;
                        break;
                    }
                }

                if (!encontrado) {
                    cout << "Empleado no encontrado." << endl;
                }
            } else {
                cout << "No hay empleados registrados." << endl;
            }
        } else if (opcion == 'e' || opcion == 'E') {
            cout << "Saliendo del programa." << endl;
            break;
        } else {
            cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;
        }
    }

    return 0;
}
