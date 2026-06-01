base = int(input())

b = list(map(int,input().split()))

matriz = []

for _ in range(base):
    matriz.append([0]*max(b))

for i in range(base):
    for j in range(max(b)):
        if j < b[i]:
            matriz[i][j] = 1
        else:
            matriz[i][j] = 0

for i in range(max(b)-1,-1,-1):
    for j in range(base):
        if j == base:
            print(matriz[j][i], end="")
        print(matriz[j][i], end=" ")
        
    print()