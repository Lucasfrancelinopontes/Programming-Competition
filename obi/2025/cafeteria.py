a = int(input())
b = int(input())
c = int(input())
d = int(input())

cons = False

while c >= a:
    c -= d

    if c <= b and c >= a:
        cons = True

if cons:
    print("S")
else:
    print("N")