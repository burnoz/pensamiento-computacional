import matplotlib.pyplot as plt
import pandas as pd

#Datos de la Tabla
tabla = pd.read_excel("datos.xlsx")
genero = tabla['Gender'].to_list()

ventas_genero = tabla.groupby("Gender")["Total"].sum().to_dict()
hombres = genero.count("Male")
mujeres = genero.count("Female")

ventas_linea = tabla.groupby("Product line")["Quantity"].sum().to_dict()

linea_de_productos= tabla['Product line']

ingreso_linea = tabla.groupby("Product line")["gross income"].sum().to_dict()

pago = tabla['Payment'].mode()

ingreso_bruto = tabla['gross income']
    
# Ciclo para presentar el menú repetidamente
def menu():
    while True:
        print("Menú de Preguntas")
        print("1. ¿Mis mejores clientes son hombres o mujeres?")
        print("2. ¿Qué tipo de línea de productos es la más solicitada?")
        print("3. ¿De qué forma prefiere pagar el cliente?")
        print("4. ¿Qué línea de productos genera más ingresos brutos?")
        print("5. Salir")
        
        try: 
            opcion = int(input("Seleccione una pregunta: "))
            if opcion == 1:
                pregunta1()
                break
            elif opcion == 2:
                pregunta2()
                break
            elif opcion == 3:
                pregunta3()
                break
            elif opcion == 4:
                pregunta4()
                break
            elif opcion == 5:
                break
            else:
                print("Opción no válida. Por favor, seleccione una opción válida.")
            
        except:
            pass

def pregunta1():
    print("¿Mis mejores clientes son hombres o mujeres?")
    x = []
    y = []

    for key, value in ventas_genero.items():
        x.append(key)
        y.append(value)

    promedio_hombres = ventas_genero.get("Male") / hombres
    promedio_mujeres = ventas_genero.get("Female") / mujeres

    print("Promedio hombres:", promedio_hombres)
    print("Promedio mujeres:", promedio_mujeres)

    plt.bar(x, y)
    plt.show()

    continuar = input("¿Desea continuar? (s/n): ")

    if continuar == "sí":
        menu()
    
def pregunta2():
    productos = []
    cantidades = []
    for key, value in ventas_linea.items():
        productos.append(key)
        cantidades.append(value)

    plt.bar(productos, cantidades)
    plt.show()

    continuar = input("¿Desea continuar? (s/n): ")

    if continuar == "sí":
        menu()

def pregunta3():
    x = []
    y = []

    for metodo in pago:
        if metodo not in x:
            x.append(metodo)

    for i in x:
        y.append(pago.count(i))

    pagos = tabla['Payment']   
    moda_pago = pagos.mode()
    moda_pagos_1 = moda_pago.to_string(index=False)
    maximo = max(y)

    print("La moda de los metodos de pago son:", moda_pagos_1, "con", maximo)

    plt.pie(y, labels=x)
    plt.show()


def pregunta4():
    x = []
    y = []

    for key, value in ingreso_linea.items():
        x.append(key)
        y.append(value)

    plt.bar(x, y)
    plt.show()

#Incluir la generación y validación de un password.

def contraseña():
    secret = "123"
    print("Bienvenido, ingrese la contraseña correcta: ")
    print("Contraseña:")
    password = input()
    if password == secret:
        print("Bienvenido al programa")
        menu()
    else:
        print("Contraseña inválida")
        contraseña()

contraseña()