import sys

# Lê N e o número de operações
linha1 = sys.stdin.readline().split()
if not linha1: exit()
n, n1 = map(int, linha1)

# Lê a lista de caracteres
p = sys.stdin.readline().split()

for _ in range(n1):
    linha = sys.stdin.readline().split()
    if not linha: continue
    
    tipo = linha[0]
    pos_inicial = int(linha[1]) - 1

    if tipo == "?":
        encontrou = False
        # Busca a partir da posição pedida até o final da lista
        for j in range(pos_inicial, len(p)):
            if p[j] != "":
                print(p[j])
                encontrou = True
                break
        
        if not encontrou:
            print("Ninguem")

    elif tipo == "!":
        if 0 <= pos_inicial < len(p):
            p[pos_inicial] = "" # Marca como removido
