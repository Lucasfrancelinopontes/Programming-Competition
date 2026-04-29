x = int(input())

if x % 2 == 0:
    for i in range(x+1,x+13,2):
        print(i)
else:
    for i in range(x,x+12,2):
        print(i)