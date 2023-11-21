// Bruno Fernando Zabala Peña
// A00838627

#include <iostream>
using namespace std;

class Stereo{
private:
    string marca;
    string modelo;
    int num_bocinas;
    int potencia;

public:
    Stereo();
    Stereo(string, string, int, int);

    void muestra_stereo();
};


class Automovil{
private:
    string fabricante;
    string nombre_modelo;
    int year;
    Stereo eq_sonido;

public:
    Automovil();
    Automovil(string, string, int, Stereo);

    void muestra_automovil();
};


Stereo::Stereo(){
    marca = "None";
    modelo = "None";
    num_bocinas = 0;
    potencia = 0;
}


Stereo::Stereo(string _marca, string _modelo, int _num_bocinas, int _potencia){
    marca = _marca;
    modelo = _modelo;
    num_bocinas = _num_bocinas;
    potencia = _potencia;
}


void Stereo::muestra_stereo(){
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Numero de bocinas: " << num_bocinas << endl;
    cout << "Potencia: " << potencia << endl;
}


Automovil::Automovil(){
    fabricante = "None";
    nombre_modelo = "None";
    year = 0;
    eq_sonido = Stereo();
}


Automovil::Automovil(string _fabricante, string _nombre_modelo, int _year, Stereo _eq_sonido){
    fabricante = _fabricante;
    nombre_modelo = _nombre_modelo;
    year = _year;
    eq_sonido = _eq_sonido;
}


void Automovil::muestra_automovil(){
    cout << "Fabricante: " << fabricante << endl;
    cout << "Nombre del modelo: " << nombre_modelo << endl;
    cout << "Year: " << year << endl;
    cout << "Equipo de sonido: " << endl;
    eq_sonido.muestra_stereo();
    cout << endl;
}


int main(){
    Stereo eq_sonido1("Sony", "Xplod", 4, 100);
    Stereo def;

    Automovil auto1("Ford", "Mustang", 2010, eq_sonido1);
    Automovil auto_def;

    cout << "Caso default" << endl;
    auto_def.muestra_automovil();

    cout << "Automovil 1: " << endl;
    auto1.muestra_automovil();

    return 0;
}