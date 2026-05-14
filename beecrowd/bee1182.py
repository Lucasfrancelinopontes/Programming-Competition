matriz = []

coluna = int(input())
soma = 0
o = input()

for c in range(12):
    for l in range(12):
        v = float(input())
        if l == coluna:
            soma += v
        matriz.append(v)


if o == "S":
    print(f"{soma:.1f}")
else:
    print(f"{soma/12:.1f}")