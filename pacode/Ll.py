s = input()
# lue = 0 
# lui = 0

def bigpaliE(s):
    for i in range(len(s)):
        if s[i:] == s[i:][::-1]:
            
            return s + s[:i][::-1]
def bigpaliD(s):
    for i in range(len(s), 0, -1):
        if s[:i] == s[:i][::-1]:
            return s[i:][::-1] + s
        
lui = bigpaliE(s)
lue = bigpaliD(s)

if len(lui) < len(lue):
    print("Luerson")
    print(len(lui) - len(s))
elif len(lue) < len(lui):
    print("Luiz")
    print(len(lue) - len(s))

else:
    print("Empate")


