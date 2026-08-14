n = int(input())

w,h,d = 1000,1000,1000
l = []

for i in range(n):
    l.append(sorted(list(map(int,input().split()))))

    if l[i][0] < w:
        w = l[i][0]
    if l[i][1] < h:
        h = l[i][1]
    if l[i][2] < d:
        d = l[i][2]

print(w*h*d)