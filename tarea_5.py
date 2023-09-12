total = 0
count = 0

while count < 6:
    count += 1

    valor = int(input("Valor: "))
    tipo = input("Escriba 'Entrada' o 'Salida': ")

    if tipo.lower() == "entrada":
        total += valor
    
    elif tipo.lower() == "salida":
        total -= valor

print(f"Total en la cuenta: {total}")