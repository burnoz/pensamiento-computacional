// Bruno Fernando Zabala Peña
// A00838627

# include <iostream>
using namespace std;

class Coordenada{
private:
    int x;
    int y;

public:
    Coordenada();
    Coordenada(int, int);

    void muestra_coordenada();
};


class Circulo{
private:
    int radio;
    Coordenada centro;

public:
    Circulo();
    Circulo(int, Coordenada);

    void set_radio(int);
    void set_centro(Coordenada);

    int get_radio();
    Coordenada get_centro();

    void muestra_circulo();
};


Coordenada::Coordenada(){
    x = 0;
    y = 0;
}


Coordenada::Coordenada(int _x, int _y){
    x = _x;
    y = _y;
}


void Coordenada::muestra_coordenada(){
    cout << "(" << x << ", " << y << ")" << endl;
}


Circulo::Circulo(){
    radio = 1;
    centro = Coordenada();
}


Circulo::Circulo(int _radio, Coordenada _centro){
    radio = _radio;
    centro = _centro;
}


void Circulo::set_radio(int _radio){
    radio = _radio;
}


void Circulo::set_centro(Coordenada _centro){
    centro = _centro;
}


int Circulo::get_radio(){
    return radio;
}


Coordenada Circulo::get_centro(){
    return centro;
}


void Circulo::muestra_circulo(){
    cout << "Radio: " << radio << endl;
    cout << "Centro: ";
    centro.muestra_coordenada();
    cout << endl;
}


int main(){
    Coordenada c;
    Coordenada c1(3, 4);

    Circulo circulo;
    Circulo circulo1(5, c1);

    cout << "Circulo default: " << endl;
    circulo.muestra_circulo();

    cout << "Circulo 1: " << endl;
    circulo1.muestra_circulo();

    return 0;
}