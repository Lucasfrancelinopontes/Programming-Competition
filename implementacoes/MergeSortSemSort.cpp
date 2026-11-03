
    
  
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define F first
#define S second

/*
 * Intercala dois intervalos que ja estao ordenados:
 * [l, mid] e [mid + 1, r].
 *
 * A comparacao <= preserva a estabilidade do Merge Sort:
 * em caso de empate, o elemento da metade esquerda vem primeiro.
 */
template <typename T>
void mergeRange(vector<T>& v, int l, int mid, int r) {
    vector<T> temp;
    temp.reserve(r - l + 1);

    int i = l;
    int j = mid + 1;

    while (i <= mid && j <= r) {
        if (v[i] <= v[j]) {
            temp.pb(v[i]);
            ++i;
        } else {
            temp.pb(v[j]);
            ++j;
        }
    }

    // Copia os elementos restantes da metade esquerda.
    while (i <= mid) {
        temp.pb(v[i]);
        ++i;
    }

    // Copia os elementos restantes da metade direita.
    while (j <= r) {
        temp.pb(v[j]);
        ++j;
    }

    // Devolve o trecho intercalado ao vetor original.
    for (int k = 0; k < sz(temp); ++k) {
        v[l + k] = temp[k];
    }
}

/*
 * Ordena o intervalo [l, r] por divisao e conquista.
 * A funcao mergeRange realiza a intercalacao; nao utiliza std::sort.
 */
template <typename T>
void mergeSort(vector<T>& v, int l, int r) {
    if (l >= r) return;

    int mid = l + (r - l) / 2;

    mergeSort(v, l, mid);
    mergeSort(v, mid + 1, r);
    mergeRange(v, l, mid, r);
}

void solve() {
    int n;
    cin >> n;

    if (n < 0) {
        cerr << "Erro: a quantidade de elementos nao pode ser negativa.\n";
        return;
    }

    vi v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    if (!v.empty()) {
        mergeSort(v, 0, n - 1);
    }

    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

