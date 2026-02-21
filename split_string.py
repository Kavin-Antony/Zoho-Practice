while True:
    a = input()
    b = ""
    c = ""
    for i in a:
        if len(b) > len(c):
            c += i
        else:
            b += i
    print(b, c)