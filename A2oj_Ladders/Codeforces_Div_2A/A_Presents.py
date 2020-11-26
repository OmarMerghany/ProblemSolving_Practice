n = int(input())
lst = list(map(int, input().split(" ")))
output = [0]*n
for i in range(0,n):
    q = lst[i]
    output[q-1] = i+1
print(" ".join(str(elem) for elem in output))