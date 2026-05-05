n = int(input())
w = list(map(int,input().split()))

possib = 0
first_one = True
last_one = -1
for i in range(len(w)):
    if w[i] == 1:

        if first_one:
            qtd_left = i
            first_one = False
        else:
            qtd_left = i - last_one -1

        
        pr = i+1
        qtd_right = 0
        while pr < len(w) and w[pr] == 0:
            qtd_right += 1
            pr += 1
        
        possib += (qtd_right+1) * (qtd_left+1)

        last_one = i
print(possib)