#include "../include/search.h"
#include "../include/cli.h"
#include <iostream>

using namespace std;

void showMenu(){
    clear();

    cout << "Que desea buscar::" << endl;
    cout << "1-. Titulo del libro" << endl;
    cout << "2-. Autor del libro" << endl;
    cout << "3-. Año de publicacion" << endl;
    cout << "4-. Categoria" << endl;
    cout << "0-. Regresar" << endl;

    int option;

    cout << " > ";
    cin >> option;

    switch (option)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 0:
        break;
    default:
        showMenu();
        break;
    }
}