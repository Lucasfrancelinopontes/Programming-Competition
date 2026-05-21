c = int(input())

for i in range(c):
    s = input()
    leftS = ""
    rigthS = ""
    for ls in range(len(s) //2 -1,-1,-1):
        leftS += s[ls]
    for rs in range(len(s) //2 ,len(s),1):
        rigthS += s[rs]

    print(leftS+ rigthS[::-1])