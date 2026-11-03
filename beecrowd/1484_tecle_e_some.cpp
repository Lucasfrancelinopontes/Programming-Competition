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

ll targetSum;
int digitsPerTerm;
array<array<bool, 10>, 10> adjacentKey{};
vector<string> solutions;

void buildKeyboardGraph() {
    // Teclado telefônico padrão:
    // 1 2 3
    // 4 5 6
    // 7 8 9
    //   0
    array<pair<int, int>, 10> pos;

    for (int d = 1; d <= 9; d++) {
        pos[d] = {(d - 1) / 3, (d - 1) % 3};
    }
    pos[0] = {3, 1};

    for (int a = 0; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            int dr = abs(pos[a].F - pos[b].F);
            int dc = abs(pos[a].S - pos[b].S);

            adjacentKey[a][b] = (a != b && max(dr, dc) == 1);
        }
    }
}

void dfs(string& path, int mask, ll completedSum,
         ll currentValue, int currentLength) {
    ll total = completedSum + currentValue;

    if (!path.empty() && total == targetSum) {
        solutions.pb(path);
        // Ao atingir a soma desejada, a sequência termina aqui.
        return;
    }

    // Nenhum dígito futuro pode diminuir a soma.
    if (total > targetSum || sz(path) == 10) return;

    int last = path.empty() ? -1 : path.back() - '0';

    for (int digit = 0; digit <= 9; digit++) {
        if (mask & (1 << digit)) continue;
        if (last != -1 && !adjacentKey[last][digit]) continue;

        ll nextCompleted = completedSum;
        ll nextValue;
        int nextLength;

        if (currentLength == 0) {
            nextValue = digit;
            nextLength = 1;
        } else {
            nextValue = currentValue * 10 + digit;
            nextLength = currentLength + 1;
        }

        if (nextLength == digitsPerTerm) {
            nextCompleted += nextValue;
            nextValue = 0;
            nextLength = 0;
        }

        if (nextCompleted + nextValue > targetSum) continue;

        path.pb(char('0' + digit));
        dfs(path, mask | (1 << digit), nextCompleted,
            nextValue, nextLength);
        path.pop_back();
    }
}

void printSolution(const string& path) {
    for (int i = 0; i < sz(path); i += digitsPerTerm) {
        if (i) cout << ' ';
        cout << path.substr(i, digitsPerTerm);
    }
    cout << '\n';
}

void solve() {
    buildKeyboardGraph();

    ll S;
    int D;
    int caseNumber = 0;

    while (cin >> S >> D) {
        if (S == -1 && D == -1) break;

        targetSum = S;
        digitsPerTerm = D;
        solutions.clear();

        string path;
        dfs(path, 0, 0, 0, 0);

        // A busca visita os dígitos em ordem crescente, mas ordenamos
        // explicitamente para deixar a saída lexicográfica garantida.
        sort(all(solutions));

        cout << '#' << ++caseNumber << '\n';

        if (solutions.empty()) {
            cout << "impossivel\n";
        } else {
            for (const string& solution : solutions) {
                printSolution(solution);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
