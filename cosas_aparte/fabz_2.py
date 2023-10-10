from random import shuffle

def imprimir_tablero(tablero):
    print("  0 1 2 3 4 5")

    for i in range(len(tablero)):
        print(i, end=" ")
        for j in range(len(tablero[i])):
            print(tablero[i][j], end=" ")
        print()
    

matriz = []

for i in range(6):
    matriz.append(["-"]*6)

nums = []

for i in range(1,19):
    nums.append(i)
    nums.append(i)

shuffle(nums)

matriz_nums = []

for i in range(6):
    matriz_nums.append(nums[6*i:6*(i+1)])

for i in matriz_nums:
    print(i)


def main():
    continuar = "s"
    turno = 1

    puntos_1 = 0
    puntos_2 = 0

    pares_1 = 0
    pares_2 = 0

    cartas = 36

    while continuar == "s":
        if turno % 2 != 0:
            imprimir_tablero(matriz)

            print("Turno jugador 1")

            r1 = int(input("Renglon carta 1: "))
            c1 = int(input("Columna carta 1: "))

            while matriz[r1][c1] != "-":
                print("Carta no disponible")
                r1 = int(input("Renglon carta 1: "))
                c1 = int(input("Columna carta 1: "))

            print("Carta 1: ", matriz_nums[r1][c1])

            r2 = int(input("Renglon carta 2: "))
            c2 = int(input("Columna carta 2: "))

            while matriz[r2][c2] != "-":
                print("Carta no disponible")
                r2 = int(input("Renglon carta 2: "))
                c2 = int(input("Columna carta 2: "))

            print("Carta 2: ", matriz_nums[r2][c2])

            if matriz_nums[r1][c1] == matriz_nums[r2][c2] and matriz[r1][c1] == "-":
                matriz[r1][c1] = matriz_nums[r1][c1]
                matriz[r2][c2] = matriz_nums[r2][c2]
                
                pares_1 += 1
                puntos_1 += 100
                cartas -= 2

                print("Adivinaste")

            continuar = input("¿Quieres seguir jugando? (s/n): ")

            turno += 1

        else:
            imprimir_tablero(matriz)

            print("Turno jugador 2")

            r1 = int(input("Renglon carta 1: "))
            c1 = int(input("Columna carta 1: "))

            while matriz[r1][c1] != "-":
                print("Carta no disponible")
                r1 = int(input("Renglon carta 1: "))
                c1 = int(input("Columna carta 1: "))

            print("Carta 1: ", matriz_nums[r1][c1])

            r2 = int(input("Renglon carta 2: "))
            c2 = int(input("Columna carta 2: "))

            while matriz[r2][c2] != "-":
                print("Carta no disponible")
                r2 = int(input("Renglon carta 2: "))
                c2 = int(input("Columna carta 2: "))

            print("Carta 2: ", matriz_nums[r2][c2])

            if matriz_nums[r1][c1] == matriz_nums[r2][c2] and matriz[r1][c1] == "-":
                matriz[r1][c1] = matriz_nums[r1][c1]
                matriz[r2][c2] = matriz_nums[r2][c2]
                
                pares_2 += 1
                puntos_2 += 100
                cartas -= 2
                
                print("Adivinaste")

            continuar = input("¿Quieres seguir jugando? (s/n): ")

            turno += 1

        if cartas == 0:
            continuar = "n"
    
    imprimir_tablero(matriz)
    
    print("Puntos jugador 1: ", puntos_1)
    print("Pares jugador 1: ", pares_1)

    print("Puntos jugador 2: ", puntos_2)
    print("Pares jugador 2: ", pares_2)

main()