# Bruno Fernando Zabala Peña
# A00838627

num = int(input("Ingresa un número: "))
factorial = 1

for i in range(num, 1, -1):
    factorial *= i

print(f"Factorial: {factorial}")