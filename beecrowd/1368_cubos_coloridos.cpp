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

using Vec3 = array<int, 3>;

// Ordem fixa das seis faces: topo, +x, +y, -x, -y, base.
const array<Vec3, 6> POS = {{
    {0, 0, 1},
    {1, 0, 0},
    {0, 1, 0},
    {-1, 0, 0},
    {0, -1, 0},
    {0, 0, -1}
}};

int positionId(const Vec3& p) {
    for (int i = 0; i < 6; i++) {
        if (POS[i] == p) return i;
    }
    return -1;
}

int permutationParity(const array<int, 3>& p) {
    int inversions = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (p[i] > p[j]) inversions++;
        }
    }

    return (inversions % 2 == 0 ? 1 : -1);
}

string canonicalCube(const array<int, 6>& color) {
    string best(6, '9');

    array<int, 3> perm = {0, 1, 2};

    do {
        int parity = permutationParity(perm);

        for (int sx : {-1, 1}) {
            for (int sy : {-1, 1}) {
                for (int sz : {-1, 1}) {
                    // Mantém apenas rotações próprias (determinante +1).
                    if (parity * sx * sy * sz != 1) continue;

                    string key(6, '0');

                    for (int oldPos = 0; oldPos < 6; oldPos++) {
                        Vec3 p = POS[oldPos];
                        Vec3 q = {0, 0, 0};
                        int sign[3] = {sx, sy, sz};

                        for (int axis = 0; axis < 3; axis++) {
                            q[perm[axis]] = sign[axis] * p[axis];
                        }

                        int newPos = positionId(q);
                        key[newPos] = char('0' + color[oldPos]);
                    }

                    best = min(best, key);
                }
            }
        }
    } while (next_permutation(all(perm)));

    return best;
}

void solve() {
    int N;

    while (cin >> N && N != 0) {
        set<string> types;

        for (int i = 0; i < N; i++) {
            int top, s1, s2, s3, s4, bottom;
            cin >> top;
            cin >> s1 >> s2 >> s3 >> s4;
            cin >> bottom;

            // As quatro faces laterais aparecem em ordem ao redor do cubo.
            array<int, 6> color = {top, s1, s2, s3, s4, bottom};
            types.insert(canonicalCube(color));
        }

        cout << sz(types) << '\n';
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
