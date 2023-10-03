count = 0
suma = 0
num = 1

while num > 0:
    num = int(input())

    if num > 0:
        suma += num
        count += 1

print(f"Suma: {suma}")
print(f"Cantidad de números válidos: {count}")
print(f"Promedio: {suma / count}")
