# Bruno Fernando Zabala Peña
# A00838627

def palabra():
    
    while True:
        word = input("Introduzca una palabra en minúsculas: ")

        if not word.islower():
            print("Toda la palabra debe estar en minúsculas\n")
            continue
        
        break

    num_letras = len(word)

    vocales = ["a", "e", "i", "o", "u"]
    num_vocales = 0

    for letter in word:
        if letter in vocales:
            word = word.replace(letter, letter.upper())
            num_vocales += 1

    num_consonantes = num_letras - num_vocales

    return word, num_letras, num_vocales, num_consonantes


pal, letras, vocs, cons = palabra()

print(f"{pal} tiene {letras} letras")
print(f"{vocs} vocales")
print(f"{cons} consonantes")
