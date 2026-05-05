t = int(input())
soma = 0

for i in range(t):
    l = list(map(int,input().split()))
    l = sorted(l)
    
    if (l[0]**2 + l[1]**2 == l[2]**2 )and (sum(l) < soma or soma == 0):
        soma = sum(l)

if soma == 0:
    soma = -1
    
print(soma)