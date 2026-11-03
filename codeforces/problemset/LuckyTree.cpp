#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funcao para verificar se o peso de uma aresta e "lucky"
bool is_lucky(int weight) {
    string s = to_string(weight);
    for (char c : s) {
        if (c != '4' && c != '7') return false;
    }
    return true;
}

// Estrutura DSU com path compression e union por tamanho
struct DSU {
    vector<int> parent;
    vector<int> sz;

    DSU(int n) {
        parent.resize(n + 1);
        sz.resize(n + 1, 1);
        for (int i = 1; i <= n; ++i) {
            parent[i] = i;
        }
    }

    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }

    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            if (sz[root_i] < sz[root_j])
                swap(root_i, root_j);
            parent[root_j] = root_i;
            sz[root_i] += sz[root_j];
        }
    }

    int get_size(int i) {
        return sz[find(i)];
    }
};

int main() {
    // Otimizacao de I/O em C++
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    DSU dsu(n);

    // Leitura das N - 1 arestas
    for (int i = 0; i < n - 1; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        
        // Conectamos apenas se a aresta NAO for lucky (unlucky edge)
        if (!is_lucky(w)) {
            dsu.unite(u, v);
        }
    }

    long long total_triplets = 0;

    // Para cada vertice i, calculamos a quantidade de pares (j, k) validos
    for (int i = 1; i <= n; ++i) {
        long long S = dsu.get_size(i);
        long long valid_choices = n - S;
        
        // (n - S) opcoes para j e (n - S - 1) opcoes para k
        total_triplets += valid_choices * (valid_choices - 1);
    }

    cout << total_triplets << "\n";

    return 0;
}