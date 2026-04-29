n = int(input())

for i in range(n):
    a,e = map(int,input().split())

    ns = input().split()

    pos = 0
    vp = 100
    va = 0
    for ii in range(a):
        if int(ns[ii]) == e:
            pos = ii+1
            break
        else:
            if int(ns[ii]) > e:
                va = int(ns[ii]) -e
            else:
                va = e - int(ns[ii])

            if va < vp:
                vp = va
                pos = ii+1
    print(pos)
