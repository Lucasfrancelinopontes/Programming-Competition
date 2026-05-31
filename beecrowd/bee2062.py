n = int(input())

p = input().split()
pdecodificado = []

for i in p:
    if i[:2] == "OB" and len(i) == 3:
        pdecodificado.append("OBI")
    elif i[:2] == "UR" and len(i) == 3:
        pdecodificado.append("URI")
    else:
        pdecodificado.append(i)

r = " ".join(pdecodificado)

print(r)