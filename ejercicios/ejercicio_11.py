# Bruno Fernando Zabala Peña
# A00838637

def primera(valor_1, valor_2, clave):
    if clave.lower() == "s":
        return valor_1 + valor_2
    
    elif clave.lower() == "r":
        return valor_1 - valor_2
    
    elif clave.lower() == "m":
        return valor_1 * valor_2
    
    elif clave.lower() == "d":
        return valor_1 / valor_2


def segunda():
    while True:
        num_1 = int(input("Ingresa un valor: "))
        num_2 = int(input("Ingresa el segundo valor: "))

        operaciones = ["s", "r", "m", "d"]

        if num_1 <= 0 or num_2 <= 0:
            print("No se aceptan valores negativos o iguales a 0\n")
            continue
        
        operacion = input("Selecciona s(suma), r(resta), m(multiplicacion), d(division): ")

        if operacion.lower() not in operaciones:
            print("Operacion no valida\n")
            continue
        
        break

    print(f"El resultado es: {primera(num_1, num_2, operacion)}")


segunda()
