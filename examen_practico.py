# Bruno Fernando Zabala Peña
# A00838627

from time import sleep

while True:
    horas = int(input("Horas: "))
    minutos = int(input("Minutos: "))
    segundos = int(input("Segundos: "))

    if (horas >= 0 and horas <= 23) and (minutos >= 0 and minutos <= 59) and (segundos >= 0 and segundos <= 59):
        print("\nInicio de la cuenta regresiva")
        break 

    else:
        print("\nError, ingrese valores válidos")


for hora in range(horas, -1, -1):
    for minuto in range(minutos, -1, -1):
        for segundo in range(segundos, -1, -1):
            if len(str(hora)) == 1:
                hora = "0" + str(hora)

            if len(str(minuto)) == 1:
                minuto = "0" + str(minuto)
                
            if len(str(segundo)) == 1:
                segundo = "0" + str(segundo)

            print(hora, minuto, segundo, sep=":")

            segundo = int(segundo)
            sleep(1)
        segundos = 59
        minuto = int(minuto)
    minutos = 59
    hora = int(hora)

print("\nFin de la cuenta regresiva")
