x, y = 4, 5
n = 9
mov = "U L R R D D U L R".split(" ")
for i in mov:
    if i == 'U':
        y += 1
    elif i == 'D':
        y -= 1
    elif i == 'R':
        x += 1
    else:
        x -= 1
print(x, y)