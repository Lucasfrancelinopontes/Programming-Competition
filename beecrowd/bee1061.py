lixo,dia = input().split()
hora,minuto,segundo = map(int,input().split(":"))
dia = int(dia)
lixo,dia1 = input().split()
hora1,minuto1,segundo1 = map(int,input().split(":"))
dia1 = int(dia1)


segt = segundo + (minuto*60) + (hora * 3600) + (dia*86400)
segt1 = segundo1 + (minuto1*60) + (hora1 * 3600) + (dia1*86400)

tt = segt1 - segt

dt = tt // 86400
tt = tt % 86400

ht = tt // 3600
tt = tt % 3600

mt = tt // 60
tt = tt % 60

print(f"{dt} dia(s)")
print(f"{ht} hora(s)")
print(f"{mt} minuto(s)")
print(f"{tt} segundo(s)")