#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Definición de la clase Usuario
class Usuario {
public:
    string nombreusuario;
    string contrasena;
};
// Función para realizar el login
bool realizarLogin(const string& nombreUsuario, const string& contrasena, const string& archivo) {
    ifstream archivousuarios(archivo);
    if (archivousuarios.is_open()) {
        Usuario usuarioactual;
        while (archivousuarios >> usuarioactual.nombreUsuario >> usuarioactual.contrasena) {
            if (usuarioactual.nombreusuario == nombreusuario && usuarioctual.contrasena == contrasena) {
                archivousuarios.close();
                return true; 
				// Usuario autenticado correctamente
            }
        }
        archivousuarios.close();
    } else {
        cout << "error al abrir el archivo.\n";
    }
    return false; // Usuario no encontrado o contraseña incorrecta
}
int main() {
    // Datos de prueba
    string nombreUsuarioIngresado;
    string contrasenaingresada;
    // Solicitar al usuario que ingrese sus credenciales
    cout << "Ingrese el nombre de usuario: ";
    cin >> nombreusuarioingresado;
    cout << "Ingrese la contrasena: ";
    cin >> contrasenaingresada;
    // Verificar las credenciales usando la función de login
    if (realizarLogin(nombreUsuarioingresado, contrasenaingresada, "usuarios.txt")) {
        cout << "Inicio de sesión exitoso.\n";
    } else {
        cout << "no se pudo iniciar sesion. el usuario o la contraseña son incorrectas.\n";
    }
    return 0;
}