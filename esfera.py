# Bruno Fernando Zabala Peña
# A00838627

from math import pi, pow

def area_vol(r):
    area = 4 * pi * pow(r, 2)
    vol = (4 * pi * pow(r, 3)) / 3
    print(f"El área es {area:.2f} u²")
    print(f"El volumen es {vol:.2f} u³")

radio = float(input("Introduzca el valor del radio: "))
area_vol(radio)

# import math

# def area_vol(r):
#     area = 4 * math.pi * math.pow(r, 2)
#     vol = (4 * math.pi * math.pow(r, 3)) / 3
#     print(f"El área es {area:.2f} u²")
#     print(f"El volumen es {vol:.2f} u³")

# radio = float(input("Introduzca el valor del radio: "))
# area_vol(radio)
