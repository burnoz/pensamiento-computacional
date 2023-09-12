# Bruno Fernando Zabala Peña
# A00838627

from random import random

num = 0
count = 0

while num < 0.7 or num > 0.9:
    num = random()
    count += 1

print(f"Cantidad de aleatorios: {count}")
print(f"Primer número encontrado: {round(num, 4)}")
