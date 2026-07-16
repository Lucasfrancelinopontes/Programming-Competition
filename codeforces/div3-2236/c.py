c = int(input())

for i in range(c):
    a,b,x = map(int,input().split())

    if a == b:
        ans = 0
    elif x > a and x > b:
        if abs(a-b) > 3:
            ans = 2
        else:
            ans = 1
    else:
        while a != b:
            a = a//b

            if a < b:
                b = b//a
                ans +=1
            
            ans +=1

    print(ans)