# Bruno Fernando Zabala Peña
# A00838627

def cuadrado(n):
    x = [int(input("Ingrese un número: ")) for i in range(n)]

    y = [j**2 for j in x]

    return x, y

num_elementos = int(input("Cantidad de números en la lista: "))

a, b = cuadrado(num_elementos)

print(a)
print(b)
