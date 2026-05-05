n = int(input())
w = list(map(int,input().split()))

possib = 0
first_one = True

for i in range(len(w)):
    if w[i] == 1:

        #calculo dos numeros para esquerda
        qtd_left = 0
        soma_left = 0
        while soma_left == 0:
            soma_left += w[i-(qtd_left+1)]
            qtd_left += 1

        qtd_left -= 1 #removendo casa com "1"

        if first_one:
            qtd_left-=1
            first_one = False

        #calculo dos numeros para direita
        qtd_right = 0
        soma_right = 0
        while soma_right == 0:
            if (i+qtd_right+1) < len(w):
                soma_right += w[i+(qtd_right+1)] 
            else:
                soma_right += w[i+(qtd_right)-1]

            qtd_right += 1

        qtd_right -= 1 #removendo casa com "1"
        if 1 not in w[i::]:
            qtd_right -= 1

        print(f'{qtd_left} 0s na esquerda e {qtd_right} 0s na direita para o 1 da posição {i}')

        possib += (qtd_right+1) * (qtd_left+1)
print(possib)