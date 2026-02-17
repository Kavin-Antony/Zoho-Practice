N = 6
arr = [1, 2, 3, 4, 5]

res = []
def rec(i, sum, list):
    if sum == N:
        res.append(list.copy())
        return
    if i < len(arr):
        list.append(arr[i])
        rec(i+1, sum+arr[i], list)
        list.pop()  
        rec(i+1, sum, list)
rec(0, 0, [])
print(res)