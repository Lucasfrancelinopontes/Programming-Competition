while True:
    try:
        t = int(input())
        v = input().split()
        f =0
        for i in range(t):
            if v[i] == "1":
                f +=1

        if f >= t*(2/3):
            print("impeachment")
        else:
            print("acusacao arquivada")
    except:
        break