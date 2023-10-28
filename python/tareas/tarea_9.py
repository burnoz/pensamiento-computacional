m1 = [[5, 30, 9], 
      [20, 10, 4]]

m2 = [[0, 6, 7], 
      [9, 25, 4]]

suma = []

if len(m1) == len(m2) and len(m1[0]) == len(m2[0]):
    for i in range(len(m1)):
        suma.append([])
        for j in range(len(m1[i])):
            suma[i].append(m1[i][j] + m2[i][j])

for x in suma:
    print(x)