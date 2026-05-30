try:
    lista = []
    while True:
        lista.append(input())

except EOFError:
    bruxao = set(lista)
    print(len(bruxao))
