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

struct Segment {
    ll len;
    bool isFree;
    string name;
};

ll parseSize(const string& token) {
    int i = 0;

    while (i < sz(token) && isdigit(token[i])) i++;

    ll value = stoll(token.substr(0, i));
    string unit = token.substr(i);

    if (unit == "Mb") value *= 1024LL;
    else if (unit == "Gb") value *= 1024LL * 1024LL;

    // O valor retornado é sempre medido em Kb.
    return value;
}

void mergeFreeSegments(vector<Segment>& disk) {
    vector<Segment> merged;

    for (const Segment& seg : disk) {
        if (seg.isFree && !merged.empty() && merged.back().isFree) {
            merged.back().len += seg.len;
        } else {
            merged.pb(seg);
        }
    }

    disk.swap(merged);
}

void optimizeDisk(vector<Segment>& disk, ll capacity) {
    vector<Segment> compacted;
    ll used = 0;

    // Mantém os arquivos na mesma ordem relativa.
    for (const Segment& seg : disk) {
        if (!seg.isFree) {
            compacted.pb(seg);
            used += seg.len;
        }
    }

    if (used < capacity) {
        compacted.pb({capacity - used, true, ""});
    }

    disk.swap(compacted);
}

int bestFit(const vector<Segment>& disk, ll need) {
    int best = -1;
    ll bestLength = LINF;

    // Como percorremos da esquerda para a direita e só atualizamos
    // quando o bloco é estritamente menor, empates ficam com o primeiro.
    for (int i = 0; i < sz(disk); i++) {
        if (disk[i].isFree && disk[i].len >= need && disk[i].len < bestLength) {
            bestLength = disk[i].len;
            best = i;
        }
    }

    return best;
}

void insertFile(vector<Segment>& disk, ll need, const string& name) {
    int at = bestFit(disk, need);
    Segment freeBlock = disk[at];

    if (freeBlock.len == need) {
        disk[at] = {need, false, name};
    } else {
        disk[at] = {need, false, name};
        disk.insert(disk.begin() + at + 1,
                    {freeBlock.len - need, true, ""});
    }
}

void removeFile(vector<Segment>& disk, const string& name) {
    for (Segment& seg : disk) {
        if (!seg.isFree && seg.name == name) {
            seg.isFree = true;
            seg.name.clear();
            break;
        }
    }

    mergeFreeSegments(disk);
}

string diskReport(const vector<Segment>& disk, ll capacity) {
    const ll blockSize = capacity / 8;
    array<ll, 8> freeBytes{};

    ll position = 0;

    for (const Segment& seg : disk) {
        ll left = position;
        ll right = position + seg.len;

        if (seg.isFree) {
            for (int i = 0; i < 8; i++) {
                ll blockLeft = i * blockSize;
                ll blockRight = blockLeft + blockSize;
                ll overlap = max(0LL, min(right, blockRight) - max(left, blockLeft));
                freeBytes[i] += overlap;
            }
        }

        position = right;
    }

    string report;

    for (int i = 0; i < 8; i++) {
        char c;

        // Compara frações inteiras para evitar erros de ponto flutuante.
        if (4 * freeBytes[i] > 3 * blockSize) c = ' ';
        else if (4 * freeBytes[i] > blockSize) c = '-';
        else c = '#';

        if (i) report += ' ';
        report += '[';
        report += c;
        report += ']';
    }

    return report;
}

void solve() {
    int N;

    while (cin >> N && N != 0) {
        string diskToken;
        cin >> diskToken;

        const ll capacity = parseSize(diskToken);
        vector<Segment> disk = {{capacity, true, ""}};
        bool failed = false;

        for (int i = 0; i < N; i++) {
            string op;
            cin >> op;

            if (op == "insere") {
                string name, sizeToken;
                cin >> name >> sizeToken;
                ll need = parseSize(sizeToken);

                if (failed) continue;

                int at = bestFit(disk, need);

                if (at == -1) {
                    optimizeDisk(disk, capacity);
                    at = bestFit(disk, need);
                }

                if (at == -1) {
                    failed = true;
                } else {
                    insertFile(disk, need, name);
                }
            } else if (op == "remove") {
                string name;
                cin >> name;

                if (!failed) removeFile(disk, name);
            } else if (op == "otimiza") {
                if (!failed) optimizeDisk(disk, capacity);
            }
        }

        if (failed) cout << "ERRO: disco cheio\n";
        else cout << diskReport(disk, capacity) << '\n';
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
