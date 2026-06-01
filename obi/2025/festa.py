e = int(input())
s = int(input())
l = int(input())

total = abs(e-s)
total += abs(s-l)
total += abs(l-e)

print(total)