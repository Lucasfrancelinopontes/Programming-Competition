n = int(input())

fila = list(map(int,input().split()))

cego = 0
tamp = fila[n-1]

for i in range(n-2,-1,-1):
    if tamp < fila[i]:
        tamp = fila[i]
    else:
        cego +=1

print(cego)