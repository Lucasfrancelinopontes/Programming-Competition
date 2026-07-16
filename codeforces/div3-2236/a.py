c = int(input())

for i in range(c):
    n = int(input())
    alturas = list(map(int,input().split()))

    ans = abs(min(alturas) - max(alturas)) +1

    print(ans)