# Diego Zuñiga, Bruno Zabala
# A01722948, A00838627

nombre_1 = input("Nombre del jugador 1: ")
nombre_2 = input("Nombre del jugador 2: ")

print("\nElige tu tirada (a para piedra, p para papel o t para tijera)")
tirada_1 = input(f"Tirada de {nombre_1}: ")
tirada_2 = input(f"Tirada de {nombre_2}: ")

if len(tirada_1) == 1 and len(tirada_2) == 1:
    
    if (tirada_1.lower() == "a" or tirada_1.lower() == "p" or tirada_1.lower() == "t") and (tirada_2.lower() == "a" or tirada_2.lower() == "p" or tirada_2.lower() == "t"):
        
        if tirada_1.lower() == tirada_2.lower():
            print("Empate")

        elif tirada_1.lower() == "a" and tirada_2.lower() == "p":
            print(f"Gana {nombre_2}")

        elif tirada_1.lower() == "a" and tirada_2.lower() == "t":
            print(f"Gana {nombre_1}")

        elif tirada_1.lower() == "p" and tirada_2.lower() == "t":
            print(f"Gana {nombre_2}")

        elif tirada_1.lower() == "p" and tirada_2.lower() == "a":
            print(f"Gana {nombre_1}")

        elif tirada_1.lower() == "t" and tirada_2.lower() == "a":
            print(f"Gana {nombre_2}")
        
        elif tirada_1.lower() == "t" and tirada_2.lower() == "p":
            print(f"Gana {nombre_1}")

    else:
        print("Tirada incorrecta")

else:
    print("Las tiradas deben ser de un caracter")

# a = piedra
# p = papel
# t = tijera