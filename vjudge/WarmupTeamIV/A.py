t = int(input())

for i in range(t):
    n = int(input())
    a = input()
    m = int(input())
    b = input()
    cdv = input()

    for j in range(m):
        if cdv[j] == "D":
            a = a + b[j]
        else:
            a = b[j] + a

    print(a)

