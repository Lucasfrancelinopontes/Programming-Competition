t = [300,1500,600,1000,150]
total = 0

for i in range(5):
    n = int(input())

    total += t[i] * n

total += 225

print(total)