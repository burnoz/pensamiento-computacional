// Bruno Fernando Zabala Peña A00838627
// Emilio Salas Porras A01178414

# include <iostream>
using namespace std;

class Dron{
private:
    string color;
    int helices;
    int bateria;
    int id;
    double masa;
    bool encendido;

public:
    Dron();
    Dron(string, int, int, int, double, bool);

    void encender();
    void apagar();
    void subir();
    void bajar();
    void girar_derecha();
    void girar_izquierda();
    void avanzar();
    void retroceder();
    void aumentar_bateria();
    void disminuir_bateria();
    void mostrar_datos();
};


Dron::Dron(){
    color = "Blanco";
    helices = 4;
    bateria = 100;
    id = 123456789;
    masa = 0.5;
    encendido = false;
}


Dron::Dron(string color_, int helices_, int bateria_, int id_, double masa_, bool encendido_){
    color = color_;
    helices = helices_;
    bateria = bateria_;
    id = id_;
    masa = masa_;
    encendido = encendido_;
}


void Dron::encender(){
    encendido = true;
    cout << "El dron " << id << " esta encendido" << endl;
}


void Dron::apagar(){
    cout << "El dron " << id << " esta apagado" << endl;
    encendido = false;
}


void Dron::subir(){
    cout << "El dron " << id << " esta subiendo" << endl;
}


void Dron::bajar(){
    cout << "El dron " << id << " esta bajando" << endl;
}


void Dron::girar_derecha(){
    cout << "El dron " << id << " esta girando a la derecha" << endl;
}

void Dron::girar_izquierda(){
    cout << "El dron " << id << " esta girando a la izquierda" << endl;
}


void Dron::avanzar(){
    cout << "El dron " << id << " esta avanzando" << endl;
}


void Dron::retroceder(){
    cout << "El dron " << id << " esta retrocediendo" << endl;
}


void Dron::aumentar_bateria(){
    bateria++;
}


void Dron::disminuir_bateria(){
    bateria--;
}


void Dron::mostrar_datos(){
    cout << "Color: " << color << endl;
    cout << "Helices: " << helices << endl;
    cout << "Bateria: " << bateria << endl;
    cout << "ID: " << id << endl;
    cout << "Masa: " << masa << endl;
    cout << "Encendido: " << encendido << endl;
    cout << endl;
}


int main() {
    Dron d1;
    Dron d2("Negro", 3, 55, 256105, 0.2, false);

    d1.mostrar_datos();
    d2.mostrar_datos();

    d1.encender();
    d2.encender();
    cout << endl;

    d1.subir();
    d2.subir();
    cout << endl;

    d1.avanzar();
    d2.avanzar();
    cout << endl;

    d1.girar_derecha();
    d2.girar_derecha();
    cout << endl;

    d1.girar_izquierda();
    d2.girar_izquierda();
    cout << endl;

    d1.retroceder();
    d2.retroceder();
    cout << endl;

    d1.bajar();
    d2.bajar();
    cout << endl;

    d1.apagar();
    d2.apagar();

    return 0;
}