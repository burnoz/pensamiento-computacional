// Bruno Fernando Zabala Peña
// A00838627

#include <iostream>
#include <vector> // Librería para usar vectores
#include <cstdlib> // Librería para usar la función rand()
using namespace std;

class Dinero{
private:
    string moneda;
    float cantidad;

public:
    // Constructores
    Dinero();
    Dinero(string, float);

    // Getters, se usan para desplegar información o realizar cálculos
    string get_moneda(){ return moneda; }
    float get_cantidad(){ return cantidad; }

    // Setter para el dinero, se usa para aumentar la cantidad de dinero
    void set_cantidad(float _cantidad){ cantidad = _cantidad; }
};


class Cliente{
private:
    string nombre;
    int id;
    Dinero dinero;

public:
    // Constructores
    Cliente();
    Cliente(string, int, Dinero);

    // Getters, se usan para agregar datos a la información de la tienda
    string get_nombre(){ return nombre; }
    int get_id(){ return id; }
};


class Tienda{
private:
    string nombre_tienda;
    string tipo_producto;
    string vendedor;
    // Vector que contiene los clientes, lo uso para agregar información con mayor facilidad
    vector <Cliente> clientes;
    int cantidad_producto;
    float precio_producto;
    Dinero dinero_tienda;

public:
    // Constructores
    Tienda();
    Tienda(string, string, string, int, float, Dinero);

    // Función para agregar clientes, push.back agrega un elemento al final del vector
    void agregar_cliente(Cliente cliente){ clientes.push_back(cliente); }

    // Funciones para mostrar información
    void mostrar_clientes();
    void mostrar_ids();
    void mostrar_tienda();

    // Función para dar la bienvenida a la tienda
    void bienvenida();

    // Getters, se usan para mostrar información y realizar cálculos
    int get_cantidad_producto(){ return cantidad_producto; }
    float get_precio_producto(){ return precio_producto; }

    // Función para disminuir la cantidad de producto
    void disminuir_cantidad_producto(int _cantidad_producto){ cantidad_producto -= _cantidad_producto; }

    // Función para aumentar dinero en la tienda
    void aumentar_dinero_tienda(float _dinero_tienda){ dinero_tienda.set_cantidad(dinero_tienda.get_cantidad() + _dinero_tienda); }
};

// Constructor default
Dinero::Dinero(){
    moneda = "MXN";
    cantidad = 0;
}

// Constructor con parámetros
Dinero::Dinero(string _moneda, float _cantidad){
    moneda = _moneda;
    cantidad = _cantidad;
}

// Constructor default
Cliente::Cliente(){
    nombre = "Sin nombre";
    id = 0;
    dinero = Dinero();
}

// Constructor con parámetros
Cliente::Cliente(string _nombre, int _id, Dinero _dinero){
    nombre = _nombre;
    id = _id;
    dinero = _dinero;
}

// Constructor default
Tienda::Tienda(){
    nombre_tienda = "Sin nombre";
    tipo_producto = "Sin tipo";
    vendedor = "Sin vendedor";
    cantidad_producto = 0;
    precio_producto = 0;
    dinero_tienda = Dinero();
}

// Constructor con parámetros
Tienda::Tienda(string _nombre_tienda, string _tipo_producto, string _vendedor, int _cantidad_producto, float _precio_producto, Dinero _dinero_tienda){
    nombre_tienda = _nombre_tienda;
    tipo_producto = _tipo_producto;
    vendedor = _vendedor;
    cantidad_producto = _cantidad_producto;
    precio_producto = _precio_producto;
    dinero_tienda = _dinero_tienda;
}


void Tienda::mostrar_clientes(){
    // Itera sobre el vector de clientes y muestra el nombre de cada uno
    for (int i = 0; i < clientes.size(); i++){
        cout << i + 1 << ". " << clientes[i].get_nombre() << endl;
    }
}


void Tienda::mostrar_ids(){
    // Itera sobre el vector de clientes y muestra el id de cada uno
    for (int i = 0; i < clientes.size(); i++){
        cout << i + 1 << ". " << clientes[i].get_id() << endl;
    }
}

// Muestra la información de la tienda
void Tienda::mostrar_tienda(){
    cout << "Nombre de la tienda: " << nombre_tienda << endl;
    cout << "Tipo de producto: " << tipo_producto << endl;
    cout << "Vendedor: " << vendedor << endl;
    cout << "Cantidad de producto: " << cantidad_producto << endl;
    cout << "Precio del producto: $" << precio_producto << " " << dinero_tienda.get_moneda() << endl;
    cout << "Dinero en la tienda: $" << dinero_tienda.get_cantidad() << " " << dinero_tienda.get_moneda() << endl;
    cout << "Clientes: " << endl;
    mostrar_clientes();
    cout << "Ids: " << endl;
    mostrar_ids();
}

// Da la bienvenida a la tienda
void Tienda::bienvenida(){
    cout << "Bienvenido a la tienda " << nombre_tienda << endl;
    cout << "Mi nombre es " << vendedor << endl;
    cout << "El producto que tenemos es " << tipo_producto << endl;
    cout << "El precio del producto es $" << precio_producto << " " << dinero_tienda.get_moneda() << endl;
    cout << "La cantidad de producto que tenemos es " << cantidad_producto << endl;
}


int main(){
    // Crea un objeto de la clase Tienda
    Dinero tienda_dinero("MXN", 10000);
    Tienda tienda1("La Casa del Pan Dulce", "Pan Dulce", "Bruno Zabala", 100, 10, tienda_dinero);
    Dinero dinero_cliente("MXN", 1000);
    // Inicializa la variable de panel para seleccionar una opción
    int panel = 0;

    // Inicializa la variable de password para acceder a la información de la tienda
    string password = "1234";
    string password_input;

    // Inicia el panel de control y lo mantiene abierto hasta que se seleccione la opción de salir
    while(panel != 3){
        cout << "Bienvenido al panel de control de la tienda" << endl;
        cout << "Que desea hacer?" << endl;
        cout << "[1] - Iniciar tienda" << endl;
        cout << "[2] - Mostrar informacion de la tienda" << endl;
        cout << "[3] - Salir" << endl;
        cout << "Opcion:" << endl;
        cin >> panel;

        // Verifica que la opción seleccionada sea válida, es decir, que esté entre 1 y 3
        while(panel < 1 || panel > 3){
            cout << endl;
            cout << "Opcion no valida" << endl;
            cout << "Opcion:" << endl;
            cin >> panel;
        }

        // Inicia la tienda
        if(panel == 1){
            int opcion = 0;
            cout << endl << endl;
            tienda1.bienvenida();

            // Mantiene el panel de la tienda abierto hasta que se seleccione la opción de salir
            while(opcion != 2){
                cout << "Que desea hacer?" << endl;
                cout << "[1] - Comprar" << endl;
                cout << "[2] - Salir" << endl;
                cout << "Opcion:" << endl;
                cin >> opcion;

                // Verifica que la opción seleccionada sea válida, es decir, que sea 1 o 2
                while(opcion < 1 || opcion > 2){
                    cout << endl;
                    cout << "Opcion no valida" << endl;
                    cout << "Opcion:" << endl;
                    cin >> opcion;
                }

                // Comprar
                if(opcion == 1){
                    // Pide el nombre del cliente y genera un id aleatorio con la función rand()
                    cout << "Ingrese su nombre:" << endl;
                    string nombre;
                    cin >> nombre;
                    int id = rand() % 1000;

                    // Crea un objeto de la clase Cliente a partir de los datos ingresados
                    Cliente cliente(nombre, id, dinero_cliente);

                    // Agrega el cliente al vector de clientes de la tienda
                    tienda1.agregar_cliente(cliente);

                    // Pide la cantidad a comprar y el saldo inicial
                    cout << "Que cantidad desea comprar?, su saldo es de $" << dinero_cliente.get_cantidad() << " " << dinero_cliente.get_moneda() << endl;
                    int cantidad;
                    cin >> cantidad;

                    // Verifica que la cantidad a comprar sea válida, es decir, que no sea mayor a la cantidad de producto que hay en la tienda o que el total a pagar sea mayor al saldo del cliente
                    while(cantidad > tienda1.get_cantidad_producto() || cantidad < 0 || cantidad * tienda1.get_precio_producto() > dinero_cliente.get_cantidad()){
                        cout << "Cantidad no valida" << endl;
                        cout << "Que cantidad desea comprar?" << endl;
                        cin >> cantidad;
                    }

                    // Suma el dinero a la tienda y resta la cantidad de producto
                    tienda1.aumentar_dinero_tienda(cantidad * tienda1.get_precio_producto());
                    tienda1.disminuir_cantidad_producto(cantidad);

                    // Resta el dinero al cliente y termina la transacción
                    cout << endl;
                    cout << "Su compra ha sido exitosa, con un total de $" << cantidad * tienda1.get_precio_producto() << " " << dinero_cliente.get_moneda() << endl;
                    cout << "Gracias por su compra" << endl;
                    cout << "Saldo restante: $" << dinero_cliente.get_cantidad() - cantidad * tienda1.get_precio_producto() << " " << dinero_cliente.get_moneda() << endl;
                    cout << endl << endl;

                    break;
                }
            }
        }

        // Pide la clave para acceder a la información de la tienda
        else if(panel == 2){
            cout << "Ingrese la clave:" << endl;
            cin >> password_input;

            // Verifica que la clave sea correcta
            if(password_input == password){
                tienda1.mostrar_tienda();

            }

            // Si la clave es incorrecta, muestra un mensaje de error
            else{
                cout << "Clave incorrecta" << endl;
            }

            cout << endl << endl;
        }

        // Sale del panel de control
        else if(panel == 3){
            cout << "Gracias por usar el panel de control" << endl;
            break;
        }
    }

    return 0;
}