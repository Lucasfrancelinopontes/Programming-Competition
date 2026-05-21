c = int(input())
letras = "abcdefghijklmnopqrstuvwyxz"
lista = [0]*26

for i in range(c):
    s = input().lower()
    count = 0
    for letra in letras:
        lista[count] = [s.count(letra),letra]
        count +=1

    lista.sort()
    lista2 = []
    for i in range(len(letras)):
        #print(lista[i][1] >= lista[-1][-1])
        if lista[i][0] == lista[-1][0]:
            #print(lista[i][1])
            lista2.append(lista[i][1])
    lista2.sort()
    print("".join(lista2))

