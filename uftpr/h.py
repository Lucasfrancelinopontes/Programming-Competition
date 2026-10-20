h, x, y = map(int,input().split())

abu = min(x,y)
if ((abu >= abs(h-12)) and ((x+h) % 2 == (y+h) %2)):
    print("SIM")
else:
    print("NAO")