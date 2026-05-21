c = int(input())
vogal = "aeiou"

for i in range(c):
    ss = input()
    d = False
    cont =0
    s = ss.lower()

    for letter in s:
        if letter not in vogal:
            cont +=1
        else:
            cont = 0
        if cont >= 3:
            d = True
    
    if d:
        print(f"{ss} nao eh facil")
    else:
        print(f"{ss} eh facil")