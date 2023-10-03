# Bruno Fernando Zabala Peña
# A00838627

def unicode(n):
    anterior = n - 1
    siguiente = n + 1
    print(str(anterior) + " = " + f"'{chr(anterior)}'")
    print(str(n) + " = " + f"'{chr(n)}'")
    print(str(siguiente) + " = " + f"'{chr(siguiente)}'")

num = int(input("Introduzca un número entero: "))
unicode(num)