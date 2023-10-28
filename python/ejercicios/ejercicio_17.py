# Bruno Fernando Zabala Peña
# A00838627

def valores():
    file = open("ejemplo_2.txt", "w")

    for i in range(1, 5):
        file.write(str(i ** 2) + "\n")
    
    file.close()


def mostrar():
    file = open("ejemplo_2.txt", "r")
    x = []

    for i in file:
        x.append(int(i))

    print(x)


valores()
mostrar()