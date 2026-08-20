n,q = map(int,input().split())

s = list(map(int,input().split()))

ss = [0]

for i in range(len(s)):
    # print("somaSS",ss[i])
    # print("soma",s[i])
    # print("total",ss[i]+s[i])
    ss.append(ss[i]+s[i])

for i in range(q):
    a,b = map(int,input().split())

    print(ss[b]-ss[a-1])
