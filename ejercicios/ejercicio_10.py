# Bruno Fernando Zabala Peña
# A00838627

def es_bisiesto(year):
    if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
        return True
    else:
        return False
    
year = int(input("Ingresa el año: "))
print(es_bisiesto(year))