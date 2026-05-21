while True:
    try:
        s = input()
        
        s = s.upper()
        newS = ""

        count = 1

        for i in range(len(s)):
            if s[i] != " ":
                if count%2 == 0:
                    newS += s[i].lower()
                else:
                    newS += s[i]
                count += 1
            else:
                newS += s[i]

        print(newS)
    except EOFError:
        break