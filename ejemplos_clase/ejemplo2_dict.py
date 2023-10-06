n = []
nums = {}

for i in range(5):
    n.append(int(input("Ingrese un numero: ")))
    nums[n[i]] = n[i] ** 3

print(n)
print(nums)
