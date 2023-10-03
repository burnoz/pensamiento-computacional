# Bruno Fernando Zabala Peña
# A00838627

def conversion(m):
    cm = m * 100
    pulgadas = cm / 2.54
    pies = round(pulgadas / 12, 2)
    #return f"{m} metros son = {pies} pies"
    return str(m) + " metros son = " + str(pies) + " pies"

metros = float(input("Introduzca la longitud en metros: "))

print(conversion(metros))
