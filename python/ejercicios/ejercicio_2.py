# Bruno Fernando Zabala Peña
# A00828627

def menor_mayor(a, b, c):
    return "\nEl número mayor es: " + str(max(a, b, c)) + "\nEl número menor es: " + str(min(a, b, c))

num_1 = int(input("Introduzca el primer número: "))
num_2 = int(input("Introduzca el segundo número: "))
num_3 = int(input("Introduzca el tercer número: "))

print(menor_mayor(num_1, num_2, num_3))
