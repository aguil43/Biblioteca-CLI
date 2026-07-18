#include <iostream> // Importar libreria para herramientas basicas entrada y salida
using namespace std; // No tener que escribir std:: antes de cada instruccion de la libreria

// Variables globales para almacenar informacion de usuario
string user = "";
string passwd = "";
bool auth = false;

// Prototipos de las funciones que estaran despues de main
void logout();
void login();
void signin();
void clean();

int main() {
    clean();
    if(user == ""){
        signin();
    }

    if(auth){
        cout << "Bienvenido " + user + " al sistema de biblioteca.";
    }else{
        cout << "Bienvenido al sistema de biblioteca.";
    }

    cout << "Seleccione lo que desea realizar" << endl;
    cout << "1-. Crear registros" << endl;
    cout << "2-. Buscar libros" << endl;
    cout << "3-. Registrarse" << endl;
    cout << "4-. Iniciar sesion" << endl;
    cout << "5-. Cerrar sesion" << endl;

    int selected;
    cin >> selected;

    switch (selected)
    {
    case 1:
        // Llamar a la funcion para los registros
        break;
    case 2:
        // Llamar a la funcion para buscar en los libros
        break;
    case 3:
        clean();
        signin();
        break;
    case 4:
        // Llamar a la funcion de inicio de sesion
        login();
        break;
    case 5:
        logout();
        break;
    default:
        clean();
        cout << "Opcion no valida";
        main();
        break;
    }

    main();
}

void clean(){
    system("cls");
}

void signin(){
    cout << "Ingresa el nombre de usuario:" << endl;
    cin >> user;
    cout << "Ingresa la password:" << endl;
    cin >> passwd;

    clean();

    cout << "Credenciales almacenadas correctamente.";
    auth = true;
    main();
}

void login(){
    string inputUser;
    string inputPassword;

    cout << "Ingrese su usuario: ";
    cin >> inputUser;
    cout << "\nIngrese su password: ";
    cin >> inputPassword;

    if(inputUser == user && inputPassword == passwd){
        auth = true;
        main();
    }else{
        clean();
        cout << "credenciales incorrectas";
        login();
    }
}

void logout(){
    auth = false;
    main();
}