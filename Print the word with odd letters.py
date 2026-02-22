res = []
n = input()
j = -1
if len(n) % 2 == 1:
    for i in range(len(n)):
        a = [" "] * len(n)
        if i == len(n)//2:
            a[i] = n[i]
            print("".join(a))
        elif i < len(n)//2:
            a[i] = n[i]
            a[-i-1] = n[-i-1]
            res.append(a)
            print("".join(a))
        else:
            print("".join(res[j]))
            j -= 1
        
