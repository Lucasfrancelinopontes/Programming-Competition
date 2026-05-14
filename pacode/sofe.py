s = input()

n = len(s)

def agv(txt):
    h1 =0
    h2 =0
    p = 1
    base = 101 #primo qualquer
    mod = 10**9+7

    maior_tam = 0

    for i in range(len(txt)):
        vl = ord(txt[i]) - ord('a') +1

        h1 = (h1 * base + vl) % mod

        h2 = (h2 + vl * p) % mod

        p = (p*base) % mod

        if h1 == h2:
            maior_tam = i+1
    return maior_tam

tlui = agv(s)

tlue = agv(s[::-1])

flui = n - tlui

flue = n - tlue

if flue < flui:
    print("Luerson")
    print(flue)
elif flue > flui:
    print("Luiz")
    print(flui)
else:
    print("Empate")