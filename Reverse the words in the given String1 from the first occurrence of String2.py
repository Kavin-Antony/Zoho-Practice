n1 = input()
n2 = input()

n1 = n1.split(" ")

res = []

i=0
for i in range(len(n1)):
    if n2 in n1[i]:
        break
    res.append(n1[i])

res += n1[i:][::-1]
print(" ".join(res))
