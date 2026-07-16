c = int(input())

for i in range(c):
    n,k = map(int,input().split())
    uns = 0

    cb = input()

    for c in cb:
        if c == "1":
            uns +=1
    
    if uns % 2 == 0:
        print("YES")
    else:
        print("NO")




    