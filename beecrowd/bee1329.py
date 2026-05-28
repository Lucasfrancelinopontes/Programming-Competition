while True:

    n = int(input())

    if n == 0:
        break

    l = list(map(int,input().split()))

    soma = sum(l)

    print(f"Mary won {len(l) - soma} times and John won {soma} times")