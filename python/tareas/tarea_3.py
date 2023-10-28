# Bruno Fernando Zabala Peña
# A00838627

def tipo_triangulo(x, y, z):
  if x <= 0 or y <= 0 or z <= 0:
    return "No es un triángulo"

  if x + y <= z or x + z <= y or y + z <= x:
    return "No es un triángulo"

  if x == y == z:
    return "Es equilátero"
  elif x == y or x == z or y == z:
    return "Es isósceles"
  else:
    return "Es escaleno"

lado_1 = int(input("Introduce el lado 1: "))
lado_2 = int(input("Introduce el lado 2: "))
lado_3 = int(input("Introduce el lado 3: "))

print(tipo_triangulo(lado_1, lado_2, lado_3))
