from os.path import exists

y = "text_2.txt"

if exists(y):
    t1 = open(y, "w")
    t1.write("Line 1\n")
    t1.close()

else:
    t = open(y, "x")
    t.close()

text = open("text.txt", "a")
text.write("Line 1\n")
text.write("Line 2\n") 
text.write("Line 3\n")
text.close()

text = open("text.txt", "r")
x = text.readline()
y = text.readline()
z = text.readline()
print(x)
print(y)
print(z)