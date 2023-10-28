# Bruno Fernando Zabala Peña
# A00838627

def tipo_num(n):
    tipo = ""

    if n % 2  == 0:
        tipo += "Par"
    else:
        tipo += "Impar"

    if n < 0:
        tipo += " negativo"
    else:
        tipo += " positivo"

    return tipo

num = int(input("Introduzca un número: "))
print(tipo_num(num))

# casos de prueba
# print(f"4: {tipo_num(4)}")
# print(f"9: {tipo_num(9)}")
# print(f"-2: {tipo_num(-2)}")
# print(f"-7: {tipo_num(-7)}")
