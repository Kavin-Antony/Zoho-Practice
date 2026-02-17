cha = ord('a')
num = ord('0')

s = set()
a = input()
res = ""

for i in a:
    # print(s)
    if i.lower() in s:
        if i.isdigit():
            while chr(num) in s:
                num += 1
            res += chr(num)
            s.add(chr(num))
        else:
            while chr(cha) in s:
                cha += 1
            if i.islower():
                res += chr(cha)
            else:
                res += chr(cha).upper()
            s.add(chr(cha))
    else:
        s.add(i.lower())
        res += i
print(res)