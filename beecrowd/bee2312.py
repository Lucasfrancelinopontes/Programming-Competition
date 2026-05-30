n = int(input())
rank = []

for i in range(n):
    n,o,p,b = input().split()
    rank.append((n,int(o),int(p),int(b)))

    rank.sort(key=lambda x: (-x[1], -x[2], -x[3], x[0]))

for n,o,p,b in rank:
    print(n,o,p,b)    