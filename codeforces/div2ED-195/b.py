n = int(input())

for _ in range(n):
    r = 0
    s = input()
    if "000" in s or "111" in s:
        r += 1
    if "010" in s or "101" in s:
        r += 1
    print(r+1)