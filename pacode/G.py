n,n1 = map(int,input().split())

p = input().split()

for i in range(n1):
    a,b = input().split()
    try:
        print(a,b)
        if a == "?":
            print(p[b-1])
        if a == "!":
            p[b-1].remove()
    except:
        print("Ninguem")