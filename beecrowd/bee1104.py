while True:
    a,b = map(int,input().split())

    if a == 0 or b == 0:
        break

    aliceC = set(map(int,input().split()))
    beatrizC = set(map(int,input().split()))


    print(min(len(aliceC - beatrizC),len(beatrizC - aliceC)))