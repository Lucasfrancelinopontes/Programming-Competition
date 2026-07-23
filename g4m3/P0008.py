l1 = list(input().split())
l2 = list(input().split())
l3 = list(input().split())
l4 = list(input().split())

total = 0

for i in range(len(l1[-1])-1,-1,-1):
    if l1[-1][i] == l3[-1][i]:
        total += 1
    else:
        break

for i in range(len(l2[-1])-1,-1,-1):
    if l4[-1][i] == l2[-1][i]:
        total += 1
    else:
        break

print(total)