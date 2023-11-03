// Incluir librería

#include <iostream>
using namespace std;


// Declarar la clase Persona
class Persona{
private:
    string nombre;
    int edad;
    double peso;
    double estatura;

public:
    // Constructores
    Persona();
    Persona(string, int, double, double);

    // Mostrar los datos
    void muestra_datos();
    void cantar();
};

// Definir los métodos
Persona::Persona(){
    nombre = "Bruno";
    edad = 18;
    peso = 60;
    estatura = 1.65;
}

Persona::Persona(string _nombre, int _edad, double _peso, double _estatura){
    nombre = _nombre;
    edad = _edad;
    peso = _peso;
    estatura = _estatura;
}

void Persona::muestra_datos(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Peso: " << peso << endl;
    cout << "Estatura: " << estatura << endl;
    cout << endl;
}

void Persona::cantar(){
    cout << endl << "Soy " << nombre << " y voy a cantar" << endl;
    cout << endl << "Todo bien al cien" << endl;
    cout << "Calma en mi para poder ver" << endl;
}

// Crear objetos y manupularlos en el main
int main(){
    // Crear, construir o instanciar objetos de la clase Persona
    Persona per_1("Pepe", 6, 20, 1.1), per_2("Juan", 19, 55, 1.6), per_3;

    // Mostrar datos
    per_1.muestra_datos();
    per_2.muestra_datos();
    per_3.muestra_datos();

    per_1.cantar();

    return 0;
}
