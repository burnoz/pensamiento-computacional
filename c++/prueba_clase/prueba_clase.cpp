// Incluir librerías

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

    // Declarar métodos de acceso
    // Método de asignación o modificación de atributos
    void set_nombre(string);
    void set_edad(int);

    string get_nombre();
    int get_edad();

    // Mostrar los datos
    void muestra_datos();
    void cantar();
    float calcular_imc();
    void calcula_agua();
    void carne_asada();
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

float Persona::calcular_imc(){
    return peso / (estatura * estatura);
}

void Persona::calcula_agua(){
    cout << nombre << " necesita " << 0.03 * peso << " litros de agua al dia" << endl;
}

void Persona::carne_asada() {
    cout << "Encender el carbon" << endl;
    cout << "Bajar la parrilla y limpiarla" << endl;
    cout << "Poner la carne" << endl;
    cout << "Darle la vuelta" << endl;
    cout << "Servir" << endl;
}

// Setters
void Persona::set_nombre(string _nombre){
    nombre = _nombre;
}

void Persona::set_edad(int _edad){
    edad = _edad;
}

// Getters
string Persona::get_nombre(){
    return nombre;
}

int Persona::get_edad(){
    return edad;
}

// Crear objetos y manupularlos en el main
int main(){
    // Crear, construir o instanciar objetos de la clase Persona
    Persona per_1("Pepe", 6, 20, 1.1), per_2("Juan", 19, 55, 1.6), per_3;

    // Mostrar datos
    per_1.muestra_datos();
    per_2.muestra_datos();
    per_3.muestra_datos();

    float imc = per_3.calcular_imc();
    cout << "IMC: " << imc << endl;

    per_2.set_nombre("Luis");
    per_2.set_edad(20);

    per_2.muestra_datos();
    per_2.calcula_agua();
    per_2.carne_asada();
    return 0;
}
