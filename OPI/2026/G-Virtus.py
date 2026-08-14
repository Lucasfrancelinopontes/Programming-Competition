t = int(input())

for i in range(t):
    n,k1,k2 = map(int,input().split())

    s = input()
    u = False
    total = 0
    ctu = 0

    if (k1+k1) >= k2:
        for d in s:
            if d == '1' and not u:
                total += k1
                u = True
            elif d == '1' and u:
                total += k2-k1
                u = False
            else:
                u = False
    else:
        for d in s:
            if d == "1":
                ctu +=1 
        total = ctu * k1

    print(total)
    
