c = int(input())

for i in range(c):
    try:
        v,v1 = input().split()

        vl = v[len(v)-len(v1):]
        print(vl)
        if vl == v1:
            print("encaixa")
        else:
            print("nao encaixa")
    except:
        print("nao encaixa")

