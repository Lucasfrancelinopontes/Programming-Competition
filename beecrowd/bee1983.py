n = int(input())
nota = 0
aluno = ""
notaMax = 0
alunoAP = ""

for i in range(n):
    aluno,nota = input().split()

    if float(nota) >= notaMax:
        notaMax = float(nota)
        alunoAP = aluno

if notaMax >= 8:
    print(alunoAP)
else:
    print("Minimum note not reached")