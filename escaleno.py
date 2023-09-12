# Bruno Fernando Zabala Peña
# A00838627

from math import sqrt

def area_escaleno(a, b, c):
    s = (a + b + c) / 2
    area = sqrt(s * (s - a) * (s - b) * (s - c))

    return f"El área del triángulo escaleno es {area:.3f} u²"

lado_1 = float(input("Introduzca el valor del primer lado: "))
lado_2 = float(input("Introduzca el valor del segundo lado: "))
lado_3 = float(input("Introduzca el valor del tercer lado: "))

print(area_escaleno(lado_1, lado_2, lado_3))
