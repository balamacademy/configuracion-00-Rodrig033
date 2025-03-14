# include <iostream>
using namespace std;

int main(){
    // Defino mis variables:
    short int edad = 0;

// Pido el valor para mi variable
    cout << "Ingresa tu edad: ";
    cin >> edad;

// Algoritmo:
    if (edad >= 18){
        cout << "Eres mayor de edad, bienvenido.";
    }
    else
    {
        cout << "No eres mayor de edad, no puedes pasar.";
    }

    return 0;
}