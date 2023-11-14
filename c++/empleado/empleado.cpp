// Bruno Fernando Zabala Peña
// A00838627

# include <iostream>
using namespace std;

class Empleado{
private:
    string nombre;
    int num_nomina;
    string depto;
    float salario_diario;

public:
    Empleado();
    Empleado(string, int, string, float);

    void muestra_empleado();
    string get_nombre();
    float calc_salario_quincenal();
    float calc_impto_quincenal();
    float calc_neto_a_pagar();
};

Empleado::Empleado(){
    nombre = "Sin nombre";
    num_nomina = 0;
    depto = "Sin departamento";
    salario_diario = 0.0;
}

Empleado::Empleado(string _nombre, int _num_nomina, string _depto, float _salario_diario){
    nombre = _nombre;
    num_nomina = _num_nomina;
    depto = _depto;
    salario_diario = _salario_diario;
}

void Empleado::muestra_empleado(){
    cout << "Nombre: " << nombre << endl;
    cout << "Numero de nomina: " << num_nomina << endl;
    cout << "Departamento: " << depto << endl;
    cout << "Salario diario: " << salario_diario << endl;
    cout << endl;
}

float Empleado::calc_salario_quincenal(){
    return salario_diario * 15;
}

float Empleado::calc_impto_quincenal(){
    float sal_quincenal = calc_salario_quincenal();

    if(sal_quincenal < 8000){
        return sal_quincenal * 0.05;
    }

    else if(sal_quincenal >= 8000 && sal_quincenal < 15000) {
        return sal_quincenal * 0.2;
    }

    else{
        return sal_quincenal * 0.34;
    }
}

float Empleado::calc_neto_a_pagar(){
    return calc_salario_quincenal() - calc_impto_quincenal();
}

string Empleado::get_nombre(){
    return nombre;
}


int main(){
    Empleado e1("Juan Perez", 12345, "Sistemas", 1000.0), def;

    def.muestra_empleado();

    e1.muestra_empleado();

    cout << "Informacion salarial de " << e1.get_nombre() << endl;
    cout << "Salario quincenal: " << e1.calc_salario_quincenal() << endl;
    cout << "Impuesto quincenal: " << e1.calc_impto_quincenal() << endl;
    cout << "Neto a pagar: " << e1.calc_neto_a_pagar() << endl;

    return 0;
}