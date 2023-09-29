# Bruno Fernando Zabala Peña
# A00838627

def repetidos(a):
    elementos = []
    repetidos = []

    for i in a:
        if i not in elementos:
            elementos.append(i)

        else:
            repetidos.append(i)

    return repetidos

lista = [4, 2, 5, 3, 7, 5, 1, 3, 8]
lista_2 = [4, 2, 6, 3, 4]
lista_3 = [20, 10, 30, 20, 30]
lista_4 = [10, 10, 10, 20, 30, 30, 30]

listas = [lista, lista_2, lista_3, lista_4]

for i in listas:
    print(repetidos(i))
