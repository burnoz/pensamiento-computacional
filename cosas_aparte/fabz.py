import random
def destapar_valor(ren_uno,col_uno,ren_dos,col_dos,valor_matriz):
    matriz=tablero_tapado()
    tablero_tapado[ren_uno][col_uno]=valor_matriz
    tablero_tapado[ren_dos][col_dos]=valor_matriz
    return tablero_tapado 
    
def tablero_tapado():
    matriz_tapada=[]
    #generar matriz
    for ren in range(6):
        renglon=[]
        for col in range(6):
            renglon.append("-")
        matriz_tapada.append(renglon)
    #mostrar el tablero tapado
    for ren in range(len(matriz_tapada)):
        for col in range(len(matriz_tapada[0])):
            print(f'{matriz_tapada[ren][col]:3}', end=" ")
        print()
    return    

def tarjeta(ren, col):
    matriz=tablero_numerico()
    valor=matriz[ren][col]
    return valor

def tablero_numerico():
    #Sacar la lista de valores sin orden
    lista=[]

    for valores in range(1, 19):
        lista.append(valores)
        lista.append(valores)

    random.shuffle(lista)
    #Matriz de 6x6 con los valores  
    matriz_numerica=[]
    n=0
    for ren in range (6):
        renglon=[]
        for col in range (6):
            renglon.append(lista[n])
            n=n+1
        matriz_numerica.append(renglon)
    return matriz_numerica

def main():
    seguir_jugando='s'
    turno=0

    while seguir_jugando=='s':
        if turno%2==0: 
            print(tablero_tapado())
            print('Turno de jugador 1')
            #inputs de celdas y validación del dato
            renglon_1_uno=int(input('renglon de la carta 1: '))
            while renglon_1_uno<0 or renglon_1_uno>6:
                renglon_1_uno=int(input('renglon de la carta 1: '))
            columna_1_uno=int(input('columna de la carta 1: '))
            while columna_1_uno<0 or columna_1_uno>6:
                columna_1_uno=int(input('columna de la carta 1: '))
            valor_matriz_1=tarjeta(renglon_1_uno,columna_1_uno)
            print('Elegiste: ',valor_matriz_1)
            
            renglon_1_dos=int(input('renglon de la carta 2: '))
            while renglon_1_dos<0 or renglon_1_dos>6:
                renglon_1_dos=int(input('renglon de la carta 2: '))
            columna_1_dos=int(input('columna de la carta 2: '))
            while columna_1_dos<0 or columna_1_dos>6:
                columna_1_dos=int(input('columna de la carta 2: '))
            if renglon_1_uno==renglon_1_dos and columna_1_uno==columna_1_dos:
                renglon_1_dos=int(input('renglon de la carta 2: '))
                while renglon_1_dos<0 or renglon_1_dos>6:
                    renglon_1_dos=int(input('renglon de la carta 2: '))
                columna_1_dos=int(input('columna de la carta 2: '))
                while columna_1_dos<0 or columna_1_dos>6:
                    columna_1_dos=int(input('columna de la carta 2: '))
            valor_matriz_2=tarjeta(renglon_1_dos,columna_1_dos)
            print('Elegiste: ',valor_matriz_2)
            if valor_matriz_1==valor_matriz_2:
                print('Par encontrado')
                destapar=destapar_valor(renglon_1_uno,columna_1_uno,renglon_1_dos,columna_1_dos,valor_matriz_2)
            print(tablero_tapado())
            
            turno=turno+1
            seguir_jugando=input('¿Seguir jugando s/n?')
        
        if turno%2!=0:
            print(tablero_tapado())
            print('Turno de jugador 2')
            #inputs de celdas y validación del dato
            renglon_2_uno=int(input('renglon de la carta 1: '))
            while renglon_2_uno<0 or renglon_2_uno>6:
                renglon_2_uno=int(input('renglon de la carta 1: '))
            columna_2_uno=int(input('columna de la carta 1: '))
            while columna_2_uno<0 or columna_1_uno>6:
                columna_2_uno=int(input('columna de la carta 1: '))
            valor_matriz=tarjeta(renglon_2_uno,columna_2_uno)
            print('Elegiste: ',valor_matriz)
            
            renglon_2_dos=int(input('renglon de la carta 2: '))
            while renglon_2_dos<0 or renglon_1_dos>6:
                renglon_2_dos=int(input('renglon de la carta 2: '))
            columna_2_dos=int(input('columna de la carta 2: '))
            while columna_2_dos<0 or columna_1_dos>6:
                columna_2_dos=int(input('columna de la carta 2: '))
            if renglon_2_uno==renglon_2_dos and columna_2_uno==columna_2_dos:
                renglon_2_dos=int(input('renglon de la carta 2: '))
                while renglon_2_dos<0 or renglon_2_dos>6:
                    renglon_2_dos=int(input('renglon de la carta 2: '))
                columna_2_dos=int(input('columna de la carta 2: '))
                while columna_2_dos<0 or columna_2_dos>6:
                    columna_2_dos=int(input('columna de la carta 2: '))
            valor_matriz=tarjeta(renglon_2_uno,columna_2_uno)
            print('Elegiste: ',valor_matriz)
            print(tablero_tapado())
            
            turno=turno+1
            seguir_jugando=input('¿Seguir jugando s/n?')
            
main()