n = int(input())

for _ in range(n):
    m = int(input())
    soma = 0
    p = {}
    for _ in range(m):
        nome,v = input().split()
        p[nome] = float(v)
    
    
    m = int(input())
    for _ in range(m):
        nome,qtd = input().split()
        soma += p[nome] * float(qtd)

    print(f"R$ {soma:.2f}")

