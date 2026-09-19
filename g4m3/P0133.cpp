#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int N;
vector<vector<long long>> tree;
vector<long long> memo;

// Retorna o valor de todos os brotinhos com pais no nível 'lvl' e filhos no nível 'lvl + 1'
long long get_sprout_sum(int lvl) {
    long long total = 0;
    int num_parents = 1 << (lvl - 1); // 2^(lvl-1)
    
    for (int j = 0; j < num_parents; ++j) {
        long long parent = tree[lvl - 1][j];
        long long left_child = tree[lvl][2 * j];
        long long right_child = tree[lvl][2 * j + 1];
        
        total += (parent + left_child + right_child);
    }
    
    return total;
}

// DP para encontrar a soma máxima do nível 'lvl' até N
long long solve(int lvl) {
    if (lvl >= N) return 0; // Não é possível formar brotos sem nível de filhos
    
    if (memo[lvl] != -1) return memo[lvl];
    
    // Opção 1: Não formar brotos no nível atual, passar para o próximo nível
    long long option1 = solve(lvl + 1);
    
    // Opção 2: Formar brotos no nível 'lvl' (usa 'lvl' e 'lvl + 1')
    // A próxima escolha disponível será no nível 'lvl + 2'
    long long option2 = get_sprout_sum(lvl) + solve(lvl + 2);
    
    return memo[lvl] = max(option1, option2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (!(cin >> N)) return 0;
    
    tree.resize(N);
    memo.assign(N + 1, -1);
    
    for (int i = 0; i < N; ++i) {
        int num_nodes = 1 << i;
        tree[i].resize(num_nodes);
        for (int j = 0; j < num_nodes; ++j) {
            cin >> tree[i][j];
        }
    }
    
    cout << solve(1) << "\n";
    
    return 0;
}