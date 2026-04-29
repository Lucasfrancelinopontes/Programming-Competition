p1,c1,p2,c2 = map(int,input().split())

t1 = p1*c1
t2 = p2*c2

if t1 == t2:
    print("0")
elif t1 > t2:
    print("-1")
else:
    print("1")