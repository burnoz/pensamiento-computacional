# Bruno Fernando Zabala Peña
# A00838627

from random import randint

secret = randint(5, 15)

num = 0

while num != secret:
    num = int(input("Adivina el número: "))
    
    if num != secret:
        print("Intenta de nuevo")

print("Felicidades, le atinate")
print(f"El número era {secret}")
