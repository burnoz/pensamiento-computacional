# Bruno Fernando Zabala Peña
# A00838627

def examen():
    si = ["sí", "si"]

    print("Responde correctamente a las siguientes preguntas (Sí / No")
    ans_1 = input("¿Colón descubrió América?: ")

    if ans_1.lower() not in si:
        return "Incorrecto"

    print("\nSiguiente pregunta")

    ans_2 = input("¿La Independencia de México fue en el año 1810?: ")

    if ans_2.lower() not in si:
        return "Incorrecto"
    
    print("\nSiguiente pregunta")

    ans_3 = input("¿The Doors fue un grupo de rock Americano?: ")
    
    if ans_3.lower() not in si:
        return "Incorrecto"
    
    return "\nFelicidades 🎊"

print(examen())
