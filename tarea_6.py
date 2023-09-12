# Bruno Fernando Zabala Peña
# A00838627

from time import sleep

for hora in range(0, 24):
    for minuto in range(0, 60):
        for segundo in range(0, 60):
            # print(f"{hora:02d}", f"{minuto:02d}", f"{segundo:02d}", sep=":")
            if len(str(segundo)) == 1:
                segundo = "0" + str(segundo)

            if len(str(minuto)) == 1:
                minuto = "0" + str(minuto)

            if len(str(hora)) == 1:
                hora = "0" + str(hora)

            print(hora, minuto, segundo, sep=":")
            sleep(1)
