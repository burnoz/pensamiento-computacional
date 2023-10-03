# Bruno Fernando Zabala Peña
# A00838627

sueldo = 0
total = 0
count = 0
menor = 0

while count < 5:
    sueldo = int(input("Dame un valor entre 100 y 500: "))

    if sueldo >= 100 and sueldo <= 500:
        count += 1
        total += sueldo

        if sueldo <= 300:
            menor += 1

print(f"{menor} empleados ganan entre 100 y 300")
print(f"{5 - menor} empleados ganan entre 100 y 300")
print(f"Importe: ${total}")
