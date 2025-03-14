# include <iostream>
using namespace std;

int main(){ 
    // Creo mis variables:
    string nombre_ingresado = "";
    short int edad_ingresada = 0;
// Pido el valor para mis variables:
    cin >> nombre_ingresado;
    cin >> edad_ingresada;

    // Salida:
    cout << "El nombre es " << nombre_ingresado << " de edad " << edad_ingresada;
    return 0;
}