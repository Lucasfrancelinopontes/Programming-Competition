n,m = map(int,input().split())

dic = {}

for _ in range(n):
    p,v = input().split()

    dic[p] = int(v)

while m:
    total = 0
    while True:
        linha = input().split()
        if linha[0] == ".":
            break

        for p in linha:
            total += dic.get(p,0)

    print(total)

    m -= 1
        