n = input()
n = n.split(" ")

res = []
for i in n:
    a = [int(j) for j in i]
    mul = 1
    for j in a:
        mul *= j
    res.append(max(mul, sum(a)))

print(res)