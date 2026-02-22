a = 0
n = 5
for i in range(1, (n*n)+1, n):
    if a == 0:
        for j in range(i, i+n):
            print(j, end = "\t")
        print()
        a = 1
    else:
        for j in range(i+n-1, i-1, -1):
            print(j, end = "\t")
        print()
        a = 0