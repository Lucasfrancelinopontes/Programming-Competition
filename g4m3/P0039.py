import sys

def solve():
    # Lê toda a entrada e pega o primeiro valor
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    n = int(input_data[0])

    if n == 1:
        print(1)
        return

    # Inicializa a matriz com zeros
    mat = [[0] * n for _ in range(n)]

    # Encontra o centro da matriz
    x = (n - 1) // 2
    y = (n - 1) // 2

    # Insere o ponto de partida
    mat[y][x] = 1
    val = 2
    
    # Vetores de direção: Direita, Cima, Esquerda, Baixo
    dx = [1, 0, -1, 0]
    dy = [0, 1, 0, -1]
    
    dir_idx = 0
    step_size = 1
    
    # Preenche a matriz espiralando para fora
    while val <= n * n:
        # O tamanho do passo se repete duas vezes (ex: 1 dir, 1 cima, depois 2 esq, 2 baixo)
        for _ in range(2):
            for _ in range(step_size):
                if val > n * n:
                    break
                x += dx[dir_idx]
                y += dy[dir_idx]
                mat[y][x] = val
                val += 1
            
            # Gira 90 graus no sentido anti-horário
            dir_idx = (dir_idx + 1) % 4
            
            if val > n * n:
                break
        
        # Aumenta a quantidade de passos para a próxima iteração
        step_size += 1

    # Descobre a largura do maior número para o alinhamento ficar bonito na tela (opcional)
    max_len = len(str(n * n))

    # Imprime a matriz de cima para baixo
    for i in range(n - 1, -1, -1):
        # rjust garante o espaçamento elegante (exatamente como na sua entrada)
        print(" ".join(str(mat[i][j]).rjust(max_len) for j in range(n)))

if __name__ == '__main__':
    solve()