arr = [10, 36, 54,89,12]
res = []
for i in arr:
    b = 0
    if pow(i, 0.5) == pow(int(pow(i, 0.5)), 2):
        b += 5
    if i % 12 == 0:
        b += 4
    if i % 2 == 0:
        b += 3
    res.append([b, i])
res.sort()
print(res)
    