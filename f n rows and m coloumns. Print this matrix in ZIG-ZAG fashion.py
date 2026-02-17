arr = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

i, j = 0, 0
up = 1
n = len(arr)
while i != 2 or j != 2:
    if up:
        print(arr[i][j])
        if i == 0:
            if j == n-1:
                i += 1
            else:
                j += 1
            up = 0 
        elif j == n-1:
            i += 1
            up = 0 
        else:
            i -= 1
            j += 1
        continue
    if not up:
        print(arr[i][j])
        if j == 0:
            if i == n-1:
                j += 1
            else:
                i += 1
            up = 1
        elif i == n-1:
            j += 1
            up = 1
        else:
            i += 1
            j -= 1
        continue
print(arr[i][j])
        
    
        


            
