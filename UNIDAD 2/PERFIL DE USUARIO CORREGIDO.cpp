#include <iostream>
#include <fstream>
using namespace std;
// Definici�n de la clase Usuario
class Usuario {
public:
    string nombre;
    string apellido;
    int edad;
    string telefono;
    string direccion;
    string correo;
    string matricula;
    void mostrarPerfil() {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << " a�os" << endl;
        cout << "Telefono: " << telefono << endl;
        cout << "Direccion: " << direccion << endl;
		cout << "Correo: " << correo << endl;
		cout << "Matricula: " << matricula <<endl;
    }
};
int main() {
    Usuario usuario;
    cout << "Ingrese el nombre: ";
    getline(cin, usuario.nombre);
    cout << "Ingrese el apellido: ";
    getline(cin, usuario.apellido);
    cout << "Ingrese la edad: ";
    cin >> usuario.edad;
    cout << "ingrese el telefono:";
    cin>> usuario.telefono;
    cout <<"ingrese la direccion:";
    cin>> usuario.direccion;
    cout <<"ingrese el correo:";
    cin>> usuario.correo;
    cout <<"ingrese la matricula:";
    cout << "\nPerfil del Usuario:\n";
    usuario.mostrarPerfil();
    ofstream archivo("perfil_usuario.txt");
	    if (archivo.is_open()) {
        archivo << "Nombre: " << usuario.nombre << endl;
        archivo << "Apellido: " << usuario.apellido << endl;
        archivo << "Edad: " << usuario.edad << " a�os" << endl; 
        archivo << "telefono" << usuario.telefono << endl;
        archivo << "direccion" << usuario.direccion << endl;
        archivo << "correo" << usuario.correo << endl;
        archivo << "matricula" << usuario.matricula << endl;
        archivo.close();
        cout << "\nPerfil del usuario guardado en 'perfil_usuario.txt'.\n";
    } else {
        cout << "Error al abrir el archivo.\n";
    }
    return 0;
}
