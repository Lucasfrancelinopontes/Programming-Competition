def ehprimo(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    else:
        return True

n = int(input())

e = list(map(int,input().split()))

st = 0
gf = True

for i in range(n):
    if gf:
        for ii in range(i+1,n):
            if gf:
                for iii in range(ii+1,n):
                    st = e[i] + e[ii] + e[iii]
                    if st > 50:
                        if ehprimo(st):
                            print("SIM")
                            print(i+1,ii+1,1+iii)
                            gf = False
                            break

if gf:
    print("NAO")
