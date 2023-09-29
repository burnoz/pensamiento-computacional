# Bruno Fernando Zabala Peña
# A0838627

def mayor_3(a, b):
    c = [i for i in a if i > 3] + [j for j in b if j > 3]
    suma = 0

    for num in c:
        suma += num
    
    return c, suma

lista_1 = [2, 5, 4, 2, 1]
lista_2 = [5, 3, 6, 7, 8]

lista_final, suma_final = mayor_3(lista_1, lista_2)

print(lista_final)
print(suma_final)
