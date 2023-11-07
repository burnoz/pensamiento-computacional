#include <iostream>
using namespace std;

class Rectangulo{
private:
    double largo;
    double ancho;

public:
    // Constructores
    Rectangulo();
    Rectangulo(double, double);

    // Métodos de acceso
    void set_largo(double);
    void set_ancho(double);

    double get_largo();
    double get_ancho();

    // Métodos de cálculo
    double calcular_area();
    double calcular_perimetro();

    // Método para mostrar los datos
    void mostrar_datos();
    void dibujar();
};

// Definir los métodos
Rectangulo::Rectangulo(){
    largo = 3;
    ancho = 2;
}

Rectangulo::Rectangulo(double _largo, double _ancho){
    largo = _largo;
    ancho = _ancho;
}

void Rectangulo::set_largo(double _largo){
    largo = _largo;
}

void Rectangulo::set_ancho(double _ancho){
    ancho = _ancho;
}

double Rectangulo::get_largo(){
    return largo;
}

double Rectangulo::get_ancho(){
    return ancho;
}

double Rectangulo::calcular_area(){
    return largo * ancho;
}

double Rectangulo::calcular_perimetro(){
    return 2 * (largo + ancho);
}

void Rectangulo::mostrar_datos(){
    cout << "Largo: " << largo << endl;
    cout << "Ancho: " << ancho << endl;
    cout << "Area: " << calcular_area() << endl;
    cout << "Perimetro: " << calcular_perimetro() << endl;
    cout << endl;
}

void Rectangulo::dibujar(){
    for(int i = 0; i < largo; i++){
        for(int j = 0; j < ancho; j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
}


int main(){
    Rectangulo r1;
    Rectangulo r2(10, 5);

    r1.mostrar_datos();
    r2.mostrar_datos();

    r1.dibujar();
    r2.dibujar();

    return 0;
}