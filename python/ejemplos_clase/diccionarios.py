lista = [1, 2, 3, 4, 5, 6, 7, 8, 9]

diccionario = {"respuestas": lista}

num = int(input())

if num not in diccionario["respuestas"]:
    print("No está\n")

else:
    print("Sí está\n")

diccionario1 = {1: "triángulo", 2: "cuadrado", 3: "círculo", 4: "trapecio"}
print(diccionario1)

for key, value in diccionario1.items():
    print(key, value)

# Dictionart methods
# clear()
# copy()
# fromkeys()
# get()
# items()
# keys()
# pop()

# examples
# clear()
diccionario1.clear()
print(diccionario1)

# copy()
diccionario1 = {1: "triángulo", 2: "cuadrado", 3: "círculo", 4: "trapecio"}
diccionario2 = diccionario1.copy()
print(diccionario2)

# fromkeys()
keys = [1, 2, 3, 4, 5]
values = "Hola"
diccionario3 = dict.fromkeys(keys, values)
print(diccionario3)

# get()
print(diccionario1.get(1))

# items()
print(diccionario1.items())

# keys()
print(diccionario1.keys())

# pop()
print(diccionario1.pop(1))