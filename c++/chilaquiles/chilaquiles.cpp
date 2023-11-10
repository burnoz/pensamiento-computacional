# include <iostream>
using namespace std;

class Chilaquiles{
private:
    string nombre;
    string salsa;
    string queso;
    string frijoles;
    string extra;
    int crema;
    float tam_porcion;
    float chipotle;

public:
    Chilaquiles();
    Chilaquiles(string, string, string, string, string, int, float, float);

    void preparar();
    void mostrar_datos();
};


Chilaquiles::Chilaquiles(){
    nombre = "Rojos tipo Tec";
    salsa = "Roja";
    queso = "Oaxaca";
    frijoles = "Peruanos refritos";
    extra = "Sin extra";
    crema = 0;
    tam_porcion = 1.5;
    chipotle = 0.3;
}


Chilaquiles::Chilaquiles(string _nombre, string _salsa, string _queso, string _frijoles, string _extra, int _crema, float _tam_porcion, float _chipotle){
    nombre = _nombre;
    salsa = _salsa;
    queso = _queso;
    frijoles = _frijoles;
    extra = _extra;
    crema = _crema;
    tam_porcion = _tam_porcion;
    chipotle = _chipotle;
}


void Chilaquiles::preparar(){
    cout << "Preparacion: " << endl;
    cout << "En un comal o sarten agrega primero los totopos, luego encima el queso y despues la salsa en un punto muy caliente con el chipotle" << endl;
    cout << "Posteriormente en un plato con una cama de frijoles agrega los chilaquiles que preparasye y encima sirve la crema y el extra" << endl;
    cout << "Y por ultimo disfruta de tus ricos chilaquiles" << nombre << endl;
}


void Chilaquiles::mostrar_datos(){
    cout << "Chilaquiles: " << nombre << endl;
    cout << "Salsa: " << salsa << endl;
    cout << "Queso: " << queso << endl;
    cout << "Frijoles: " << frijoles << endl;
    cout << "Extra: " << extra << endl;
    cout << "Crema: " << crema << " cucharadas" << endl;
    cout << "Tam. de porcion: " << tam_porcion << endl;
    cout << "Chipotle: " << chipotle << " pieza" << endl;
    cout << endl;
}


int main(){
    Chilaquiles chilaq_1("Verdes con pollo", "Verde con cilantro", "Oaxaca", "Negros", "Pollo", 3, 1, 0);
    Chilaquiles chilaq_2("Divorciados", "Roja y verde con cilantro", "Oaxaca", "Negros", "Pollo", 4, 2, 1);
    Chilaquiles chilaq_3;

    chilaq_1.mostrar_datos();
    chilaq_2.mostrar_datos();
    chilaq_3.mostrar_datos();

    chilaq_1.preparar();

    return 0;
}