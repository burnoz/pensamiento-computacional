x = [[1, 2, 3], 
     [4, 5, 6], 
     [7, 8, 9]]

y = [[9, 8, 7],
     [6, 5, 4],
     [3, 2, 1]]

for i in y:
    print(i)
print()

for j in x:
    print(j)
print()

z = x + y
print(z)
print()

rows = int(input("r: "))
columns = int(input("c: "))

matrix = []

for i in range(rows):
     matrix.append([])
     for j in range(columns):
          matrix[i].append(int(input()))

for k in matrix:
     print(k)
     