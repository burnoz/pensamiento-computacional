from os import system

def cls():
    system('clear')

def promedio():
    m = float(input("Matemáticas: "))
    f = float(input("Física: "))
    p = float(input("Programación: "))

    if m > 100 or m < 0 or f > 100 or f < 0 or p > 100 or p < 0:
        print("Calificación no válida")
        input("...")
        cls()
        promedio()

    prom = (m + f + p) / 3
    return f"\nAprobado con {prom:.2f} de promedio" if prom >= 70 else "\nReprobado"

print(promedio())