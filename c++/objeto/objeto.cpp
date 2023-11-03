// Bruno Fernando Zabala Peña
// A00838627

#include <iostream>
using namespace std;

class Pokemon{
public:
    string name;
    string first_type;
    string second_type;
    int hp;
    int lvl;

    int receive_dmg(){
        hp = hp - 1;
        cout << name << " ha perdido un punto de vida" << std::endl;
        return hp;
    }

    int heal(){
        hp = hp + 1;
        cout << name << " ha recuperado un punto de vida" << std::endl;
        return hp;
    }
};


int main(){
    Pokemon squirtle;

    squirtle.name = "Squirtle";
    squirtle.first_type = "Water";
    squirtle.second_type = "";
    squirtle.hp = 36;
    squirtle.lvl = 5;

    if (squirtle.second_type == ""){
        squirtle.second_type = "None";
    }

    cout << "Nombre: "<< squirtle.name << endl;
    cout << "HP: "<< squirtle.hp << endl;
    cout << "Nivel: " << squirtle.lvl << endl;
    cout << "Tipo primario: "<< squirtle.first_type << endl;
    cout << "Tipo secundario: "<< squirtle.second_type << endl;
    squirtle.receive_dmg();
    cout << "HP: " << squirtle.hp << endl;
    squirtle.heal();
    cout << "HP: " << squirtle.hp << endl;
    return 0;
}
