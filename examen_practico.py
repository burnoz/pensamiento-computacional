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

while horas >= 0:
    while minutos >= 0:
        while segundos >= 0:
            if len(str(horas)) == 1:
                horas = "0" + str(horas)

            if len(str(minutos)) == 1:
                minutos = "0" + str(minutos)
                
            if len(str(segundos)) == 1:
                segundos = "0" + str(segundos)

            print(horas, minutos, segundos, sep=":")

            horas = int(horas)
            minutos = int(minutos)
            segundos = int(segundos)

            segundos -= 1
            sleep(1)
        segundos = 59
        minutos -= 1
    minutos = 59
    horas -= 1

print("\nFin de la cuenta regresiva")
