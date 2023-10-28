# Bruno Fernando Zabala Peña
# A00838627

def dict2file(a, b):
    file = open(b, "w")

    file.write(str(a))


d = {4: "maria", 5: "Juan", 6: "Felicidad"}
archivo = "ejemplo_1.txt"

dict2file(d, archivo)


def file2dict(x): 
    file = open(x, "r")

    return file.read()


y = file2dict(archivo)
print(y)