# Bruno Fernando Zabala Peña
# A00838627

from random import randint

m = []

for i in range(5):
    m.append([])
    for j in range(3):
        m[i].append([])

print("Matriz vacía: ")

for c in m:
    print(c)

for k in range(5):
    for l in range(3):
        m[k][l] = randint(10, 15)

print("\nMatriz llena: ")

for a in m:
    print(a)