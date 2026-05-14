from functools import cache
matrix=[]
for i in range(10):
    matrix.append(list(map(int,input().split())))

lulu = tuple([False] * 10)

@cache
def fe(linha_atual,colu):
    if linha_atual == 10:
        return 0
    
    ml = 0

    clu = list(colu)
    for coluna in range(10):
        if not clu[coluna]:
            clu[coluna] = True 
            
            lucro = matrix[linha_atual][coluna] + fe(linha_atual + 1,tuple(clu))
            ml = max(ml, lucro)
            
            clu[coluna] = False 
            
    return ml

print(fe(0,lulu))
